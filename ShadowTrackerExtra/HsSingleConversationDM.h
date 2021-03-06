//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsViewableConversation.h"

@class HSConversation;

@interface HsSingleConversationDM : HsViewableConversation
{
    _Bool _hasOlderMessages;
    HSConversation *_conversation;
}

@property(retain, nonatomic) HSConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (_Bool)hasOlderMessages;
- (unsigned long long)type;
- (_Bool)shouldOpen;
- (void)prependConversations:(id)arg1;
- (id)filterConversationsToPrepend:(id)arg1;
- (id)conversations;
- (void)initializeConversationsForUI;
- (id)activeConversation;
- (id)identifier;
- (void)refetchConversationFromDB;
- (id)initWithConversation:(id)arg1 platform:(id)arg2 domain:(id)arg3 liveUpdateDM:(id)arg4 conversationLoader:(id)arg5 conversationManager:(id)arg6 user:(id)arg7;
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 liveUpdateDM:(id)arg3 conversationLoader:(id)arg4 conversationManager:(id)arg5 user:(id)arg6;

@end

