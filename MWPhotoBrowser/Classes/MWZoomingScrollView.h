//
//  ZoomingScrollView.h
//  MWPhotoBrowser
//
//  Created by Michael Waterfall on 14/10/2010.
//  Copyright 2010 d3i. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWPhotoProtocol.h"
#import "MWTapDetectingImageView.h"
#import "MWTapDetectingView.h"

@class MWPhotoBrowser, MWPhoto, MWCaptionView;

@interface MWZoomingScrollView : UIScrollView <UIScrollViewDelegate, MWTapDetectingImageViewDelegate, MWTapDetectingViewDelegate> {

}

@property (nonatomic) MWCaptionView *captionView;
@property (nonatomic) id<MWPhoto> photo;

- (id)initWithPhotoBrowser:(MWPhotoBrowser *)browser;
- (void)displayImage;
- (void)displayImageFailure;
- (void)setMaxMinZoomScalesForCurrentBounds;
#ifdef MWPHOTO_EAGLE_AUTO_SCALE
- (void)updateMinZoomScalesForCurrentBounds;
#endif // MWPHOTO_EAGLE_AUTO_SCALE
- (void)prepareForReuse;

#ifdef MWPHOTO_EAGLE_DISABLE_PINCH_MODE
- (void)disablePinchGesture:(BOOL)disable;
#endif // MWPHOTO_EAGLE_DISABLE_PINCH_MODE

@end
