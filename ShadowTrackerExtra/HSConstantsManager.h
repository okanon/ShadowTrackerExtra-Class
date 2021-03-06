//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableString;

@interface HSConstantsManager : NSObject
{
    double TABLE_HEIGHT;
    double COMPLETE_HEIGHT;
    double COMPLETE_WIDTH;
    double HEADER_HEIGHT;
    double STATUS_BAR_HEIGHT;
    struct CGRect SEARCH_BAR_FRAME;
    struct CGRect COMPLETE_FRAME;
    struct CGRect VIEW_FRAME;
    _Bool isPortrait;
    long long interfaceOrientation;
    unsigned long long interfaceOrientationMask;
    NSDictionary *deviceMakeDictionary;
    NSMutableString *userAgent;
    _Bool isUIDecomposed;
    _Bool isStatusBarHidden;
    int _visibleScreenType;
}

+ (id)sharedInstance;
@property(nonatomic) int visibleScreenType; // @synthesize visibleScreenType=_visibleScreenType;
@property(nonatomic) _Bool isStatusBarHidden; // @synthesize isStatusBarHidden;
@property(nonatomic) double STATUS_BAR_HEIGHT; // @synthesize STATUS_BAR_HEIGHT;
@property(nonatomic) struct CGRect VIEW_FRAME; // @synthesize VIEW_FRAME;
@property(nonatomic) double HEADER_HEIGHT; // @synthesize HEADER_HEIGHT;
@property(nonatomic) double COMPLETE_HEIGHT; // @synthesize COMPLETE_HEIGHT;
@property(nonatomic) double COMPLETE_WIDTH; // @synthesize COMPLETE_WIDTH;
@property(nonatomic) struct CGRect COMPLETE_FRAME; // @synthesize COMPLETE_FRAME;
@property(nonatomic) struct CGRect SEARCH_BAR_FRAME; // @synthesize SEARCH_BAR_FRAME;
@property(nonatomic) double TABLE_HEIGHT; // @synthesize TABLE_HEIGHT;
- (void).cxx_destruct;
- (id)parseUserSelectedDateString:(id)arg1;
- (id)formatUserSelectedDate:(id)arg1;

@end

