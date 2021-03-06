//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GVoiceMuteSwitch : NSObject
{
    double soundDuration;
    double detecTime;
    struct GCloudVoiceEngine *pVoiceEngine;
}

+ (id)sharedInstance;
- (unsigned long long)detectMuteSwitch;
- (void)incrementTimer;
- (void)playbackComplete;
- (void)setNotify:(struct GCloudVoiceEngine *)arg1;
- (id)init;

@end

