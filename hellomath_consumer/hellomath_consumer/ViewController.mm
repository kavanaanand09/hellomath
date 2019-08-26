//
//  ViewController.m
//  hellomath_consumer
//
//  Created by Kavana Anand on 8/26/19.
//  Copyright © 2019 Kavana Anand. All rights reserved.
//

#import "ViewController.h"
#import "hellomath_utilities.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
	[super viewDidLoad];
	// Do any additional setup after loading the view.
	
	int a = 10;
	int b = 20;
	
	hellomath_utilities *hm_utility = [[hellomath_utilities alloc] init];
	
	int sum = [hm_utility getSumofA:a andB:b];
	
	NSLog(@"Sum: %d", sum);
}


@end
