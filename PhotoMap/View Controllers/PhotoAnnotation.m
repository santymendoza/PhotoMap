//
//  PhotoAnnotation.m
//  PhotoMap
//
//  Created by Santy Mendoza on 7/8/21.
//  Copyright © 2021 Codepath. All rights reserved.
//

#import "PhotoAnnotation.h"

@implementation PhotoAnnotation

- (NSString *)title {
    return [NSString stringWithFormat:@"%f", self.coordinate.latitude];
}

@end
