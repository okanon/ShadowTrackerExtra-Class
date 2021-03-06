//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HSUserDM, NSArray, NSError, NSString;

@protocol HsConversationListener <NSObject>
- (void)didFailToLoadConversationsWithError:(NSError *)arg1 forUser:(HSUserDM *)arg2;
- (void)didLoadMoreConversations:(NSArray *)arg1 forUser:(HSUserDM *)arg2;
- (void)didStartLoadingConversationsForUser:(HSUserDM *)arg1;
- (void)handleIdempotentPreIssueCreationSuccess;
- (void)handlePreIssueCreationSuccess;
- (void)onConversationInboxPollSuccess;
- (void)onConversationInboxPollFailure;
- (_Bool)isVisibleOnUI;
- (void)agentTypingStatusChanged:(_Bool)arg1;
- (void)conversationStateChangedTo:(unsigned long long)arg1;
- (void)showAttachmentForLocalFileName:(NSString *)arg1 displayName:(NSString *)arg2 contentType:(NSString *)arg3 resourceType:(unsigned long long)arg4;
@end

