//
//  hellomath_utilities.m
//  hellomath_consumer
//
//  Created by Kavana Anand on 8/26/19.
//  Copyright © 2019 Kavana Anand. All rights reserved.
//

#import "hellomath_utilities.h"
#import "test_basic.hpp"

@implementation hellomath_utilities

//- (instancetype)init {
//	if (self = [super init]) {
//		// Initialize self
//	}
//	return self;
//}

-(int)getSumofA:(int)a andB:(int)b{
	return hellomath::add(a,b);
}

-(int)getDifferenceofA:(int)a andB:(int)b {
	return hellomath::sub(a,b);
}

@end
