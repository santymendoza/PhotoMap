//
//  FullImageViewController.h
//  PhotoMap
//
//  Created by emersonmalca on 7/8/18.
//  Copyright © 2018 Codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PhotoMapViewController.h"
#import "UIImageView+AFNetworking.h"

@interface FullImageViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *fullPhoto;
@property (strong, nonatomic) UIImage *selectedImageView;

@end
