//
//  test_basic.cpp
//  hellomath
//
//  Created by Kavana Anand on 8/26/19.
//  Copyright © 2019 Kavana Anand. All rights reserved.
//

#include "test_basic.hpp"


namespace hellomath {

inline namespace v1 {
	
	__attribute__((visibility("default")))
	int add(int a, int b) {
		return a + b;
	}
    
    int sub(int a, int b) {
        return a - b;
    }
	
}

inline namespace v2 {
    
    __attribute__((visibility("default")))
    float add(float a, float b, float c) {
        return a + b + c;
    }
    
    float sub(float a, float b, float c) {
        return a - b - c;
    }
    
}
    

	
}
