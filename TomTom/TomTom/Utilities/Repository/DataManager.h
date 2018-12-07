//
//  DataManager.h
//  TomTom
//
//  Created by Djuro Alfirevic on 12/7/18.
//  Copyright © 2018 Djuro Alfirevic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface DataManager : NSObject
+ (id)sharedInstance;
- (void)storePostsToDatabase:(NSArray *)posts;
- (void)storeUserToDatabase:(User *)user;
- (BOOL)userExistsInDatabase:(NSInteger)userId;
@end
