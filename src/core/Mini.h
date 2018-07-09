/**
 * ████████████████████████████████████████████████████████████████████████████████████████████████████
 * Name          :   Mini Header
 * Version       :   0.0.0.1
 * Description   :   Core Mini Header
 * ████████████████████████████████████████████████████████████████████████████████████████████████████
 **/

#ifndef MINI_H
#define MINI_H
#include <iostream>

#pragma once
/*
  Mini Application

    Usage:
    // Mini instance
    Mini instance = Mini();
*/
class Mini{

private:

public:

  /*
		Mini NAme

	*/
  std::string Name;

  /*
		Mini Creating
		@param Name	-> Optional
	*/
  Mini();

  /*
		Mini Result
	*/
  int Result(){

    // default main thread result
    return 0;
  };

};
#endif
