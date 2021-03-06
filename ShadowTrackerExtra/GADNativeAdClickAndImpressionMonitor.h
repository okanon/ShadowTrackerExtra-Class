//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInternalNativeAd, GADNativeAdContext, GADObserverCollection;

@interface GADNativeAdClickAndImpressionMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADInternalNativeAd *_nativeAd;
    GADNativeAdContext *_nativeAdContext;
    struct NSDictionary *_adConfiguration;
}

- (void).cxx_destruct;
- (void)handleConfirmationClick:(double)arg1;
- (void)handleUnconfirmedClickAction:(id)arg1;
- (void)handleAdMutedAction;
- (void)handleImpressionRecordedAction;
- (void)handleClickRecordedAction;
- (void)handleImpression:(id)arg1;
- (void)handleClick:(id)arg1;
- (id)initWithAd:(id)arg1 nativeAdContext:(id)arg2 adConfiguration:(struct NSDictionary *)arg3;

@end

