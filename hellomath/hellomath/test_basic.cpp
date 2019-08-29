//
//  test_basic.cpp
//  hellomath
//
//  Created by Kavana Anand on 8/26/19.
//  Copyright © 2019 Kavana Anand. All rights reserved.
//

#include "test_basic.hpp"


namespace hellomath {
	
	__attribute__((visibility("default")))
	int add(int a, int b) {
		return a + b;
	}
	
	__attribute__((deprecated))
	int sub(int a, int b) {
		return a - b;
	}
	
}
