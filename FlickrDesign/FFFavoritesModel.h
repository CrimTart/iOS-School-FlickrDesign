//
//  FFFavoritesModel.h
//  FlickrDesign
//
//  Created by Admin on 30.06.17.
//  Copyright © 2017 ilya. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFFacade.h"

@class FFItem;

@interface FFFavoritesModel : NSObject

-(instancetype) initWithFacade: (FFFacade *)facade;

-(void) getFavoriteItemsWithCompletionHandler: (void (^)(void))completionHandler;

-(FFItem *) itemForIndex: (NSUInteger)index;

-(NSUInteger) numberOfItems;

@end
