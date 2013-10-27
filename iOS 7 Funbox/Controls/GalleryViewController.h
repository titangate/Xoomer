//
//  GalleryViewController.h
//  iOS 7 Funbox
//
//  Created by Nanyi Jiang on 10/26/2013.
//  Copyright (c) 2013 Nanyi Jiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GalleryItem;

@interface GalleryViewController : UIViewController
- (void)addItem:(GalleryItem *)item;
- (void)clearItem;
@end
