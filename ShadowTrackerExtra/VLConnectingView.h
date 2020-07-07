//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, VLLoadingView;

@interface VLConnectingView : UIView
{
    UIView *_bgView;
    VLLoadingView *_loadingView;
    UIImageView *_errorView;
}

@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) VLLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)showError;
- (void)stopLoading;
- (void)startLoading;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
