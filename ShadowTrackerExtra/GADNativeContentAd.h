//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNativeAd.h"

@class GADNativeAdImage, GADVideoController, NSArray, NSString;

@interface GADNativeContentAd : GADNativeAd
{
    GADVideoController *_videoController;
}

- (void).cxx_destruct;
- (void)unregisterAdView;
- (void)updateMediaView:(id)arg1;
- (void)updateAdChoicesView:(id)arg1;
- (void)registerAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (void)registerAdView:(id)arg1 assetViews:(id)arg2;
- (id)adType;
- (id)adChoicesIcon;
@property(readonly, nonatomic) GADVideoController *videoController;
@property(readonly, nonatomic) NSString *advertiser;
@property(readonly, nonatomic) NSString *callToAction;
@property(readonly, nonatomic) GADNativeAdImage *logo;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSString *body;
@property(readonly, nonatomic) NSString *headline;

@end

