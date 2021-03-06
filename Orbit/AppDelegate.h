//
//  AppDelegate.h
//  Orbit
//
//  Created by Hamdan Javeed on 8/13/13.
//  Copyright Hamdan Javeed 2013. All rights reserved.
//

#import <UIKit/UIKit.h>

// Added only for iOS 6 support
@interface MyNavigationController : UINavigationController <CCDirectorDelegate>
@end

@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow *window_;
	MyNavigationController *navController_;

	CCDirectorIOS	*__unsafe_unretained director_;							// weak ref
}

@property (nonatomic, strong) UIWindow *window;
@property (readonly) MyNavigationController *navController;
@property (readonly, unsafe_unretained) CCDirectorIOS *director;

@end
