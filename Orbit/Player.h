//
//  Player.h
//  Orbit
//
//  Created by Hamdan Javeed on 2013-08-15.
//  Copyright (c) 2013 Hamdan Javeed. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject
// returns the player's sprite
- (CCSprite *)sprite;

// updates the player's position and rotation
- (void)update:(ccTime)delta;

- (void)moveUpOrbit;

// the radius of the player's orbit
@property (nonatomic) float orbitalDistance;
@end
