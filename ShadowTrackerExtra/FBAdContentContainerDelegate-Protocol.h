//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAdViewabilityValidator, NSError;

@protocol FBAdContentContainerDelegate <NSObject>
- (void)adDidFailToLoadWithError:(NSError *)arg1;
- (void)adWillLogImpression;
- (void)adDidLoad;

@optional
- (FBAdViewabilityValidator *)contentContainerViewabilityValidator;
- (void)adDidTerminate;
- (void)adDidLogClick;
- (void)adCTAClick;
@end
