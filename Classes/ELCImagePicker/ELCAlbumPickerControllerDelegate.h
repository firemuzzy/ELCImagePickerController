//
//  ELCAlbumPickerControllerDelegate.h
//  Pods
//
//  Created by Michael Charkin on 3/9/14.
//
//

#import <Foundation/Foundation.h>

@class ELCAlbumPickerController;

@protocol ELCAlbumPickerControllerDelegate <NSObject>

- (void)elcAlbumPickerController:(ELCAlbumPickerController *)albumPicker failedWithError:(NSError *)error;

@end
