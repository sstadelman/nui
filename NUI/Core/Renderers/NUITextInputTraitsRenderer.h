//
//  NUITextInputTraitsRenderer.h
//  NUIDemo
//
//  Created by Alexey Trenikhin on 3/13/16.
//  Copyright © 2016 Tom Benner. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface NUITextInputTraitsRenderer : NSObject

+ (void)renderKeyboard:(id<UITextInputTraits>) traits withClass:(NSString*)className;

@end
