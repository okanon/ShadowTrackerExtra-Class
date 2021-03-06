//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMSDKLoginDelegate-Protocol.h"
#import "LineSDKLoginDelegate-Protocol.h"

@class NSString;

@interface IMSDKLoginLineManager : NSObject <LineSDKLoginDelegate, IMSDKLoginDelegate>
{
    int _actionType;
    CDUnknownBlockType _currentHandle;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) CDUnknownBlockType currentHandle; // @synthesize currentHandle=_currentHandle;
- (void).cxx_destruct;
- (_Bool)isSupportApi;
- (_Bool)isInstalled;
- (void)logout;
- (void)bindWithSubChannel:(id)arg1 extra:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)checkAndLoginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)loginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (id)channelID;
- (void)handleLoginWithToken:(id)arg1 error:(id)arg2;
- (void)loginLineWithPermissions:(id)arg1 actionType:(int)arg2 handle:(CDUnknownBlockType)arg3;
- (void)didLogin:(id)arg1 credential:(id)arg2 profile:(id)arg3 error:(id)arg4;
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSingleton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

