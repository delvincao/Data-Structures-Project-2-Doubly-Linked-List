

/*
Name: Delvin Cao
CWID: 88502432
Email: delvincao@csu.fullerton.edu
*/


/// Starter includes (yw)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"


//
namespace CPSC131::PalindromeDetector
{
	/// Your welcome
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		MyStack<char> stack;
		MyQueue<char> queue;

		for (size_t i = 0; i < s.size(); ++i)
		{
			char c = s[i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				c = std::tolower(c);
				stack.push(c);
				queue.enqueue(c);
			}
		}
		while (!queue.empty() && !stack.empty())
		{
			char a = stack.top();
			char b = queue.front();
			if (a != b) {
				return false;
			}
			queue.dequeue();
			stack.pop();
		}
		return true;
	}
}






