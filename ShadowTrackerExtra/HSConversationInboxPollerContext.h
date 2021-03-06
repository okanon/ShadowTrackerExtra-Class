//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HSUserDM, HsConversationInboxDM, HsSDKConfigurationDM;
@protocol HSAppLifeCycleEventsHandler, HsSDKState;

@interface HSConversationInboxPollerContext : NSObject
{
    id <HSAppLifeCycleEventsHandler> _appLifeCycleEventHandler;
    HSUserDM *_user;
    id <HsSDKState> _sdkState;
    HsSDKConfigurationDM *_sdkConfiguration;
    HsConversationInboxDM *_inboxDM;
}

@property(nonatomic) __weak HsConversationInboxDM *inboxDM; // @synthesize inboxDM=_inboxDM;
@property(nonatomic) __weak HsSDKConfigurationDM *sdkConfiguration; // @synthesize sdkConfiguration=_sdkConfiguration;
@property(nonatomic) __weak id <HsSDKState> sdkState; // @synthesize sdkState=_sdkState;
@property(nonatomic) __weak HSUserDM *user; // @synthesize user=_user;
@property(nonatomic) __weak id <HSAppLifeCycleEventsHandler> appLifeCycleEventHandler; // @synthesize appLifeCycleEventHandler=_appLifeCycleEventHandler;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isInAppConversationDisabled;
@property(readonly, nonatomic) _Bool isAnyConversationInProgress;
@property(readonly, nonatomic) _Bool isCurrentlyPushEnabled;
@property(readonly, nonatomic) _Bool isPushTokenSyncedForActiveUser;
@property(readonly, nonatomic) _Bool isIssueExistsForActiveUser;
- (id)initWithUser:(id)arg1 sdkState:(id)arg2 sdkConfiguration:(id)arg3 conversationInbox:(id)arg4 appLifeCycleEventHandler:(id)arg5;

@end

