//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (HsApplicationDelegate)
+ (void)swizzleApplicationDelegatesForPush;
+ (void)swizzleApplicationDelegatesForBackgroundSessions;
- (void)application:(id)arg1 hsHandleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 hsHandleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 hsHandleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 hsDidRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 hsDidReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 hsDidReceiveLocalNotification:(id)arg2;
- (void)setHelpshiftBackgroundSessionDelegate:(id)arg1;
- (void)setHelpshiftDelegate:(id)arg1;
@end

