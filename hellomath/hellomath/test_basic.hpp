//
//  test_basic.hpp
//  hellomath
//
//  Created by Kavana Anand on 8/26/19.
//  Copyright © 2019 Kavana Anand. All rights reserved.
//

#ifndef test_basic_hpp
#define test_basic_hpp

#include <stdio.h>


namespace hellomath {

inline namespace v1 {
	
	int add(int a, int b);

    int sub(int a, int b);

}

inline namespace v2 {
    
    float add(float a, float b, float c);
    
    float sub(float a, float b, float c);

}


	
}


#endif /* test_basic_hpp */
