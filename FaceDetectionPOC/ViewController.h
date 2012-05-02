//
//  ViewController.h
//  FaceDetectionPOC
//
//  Created by Jeroen Trappers on 30/04/12.
//  Copyright (c) 2012 iCapps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController 
    <UIGestureRecognizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, weak) IBOutlet UIView *previewView;

@end