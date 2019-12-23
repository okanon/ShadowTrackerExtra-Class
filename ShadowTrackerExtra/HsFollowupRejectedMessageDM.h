//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsAutoRetriableMessageDM.h"

@class NSString;

@interface HsFollowupRejectedMessageDM : HsAutoRetriableMessageDM
{
    NSString *_referredMessageId;
    unsigned long long _reason;
    NSString *_openConversationID;
}

@property(retain, nonatomic) NSString *openConversationID; // @synthesize openConversationID=_openConversationID;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *referredMessageId; // @synthesize referredMessageId=_referredMessageId;
- (void).cxx_destruct;
- (void)sendAutoRetriableDMWithUser:(id)arg1 conversationServerInfo:(id)arg2 withError:(id *)arg3;
- (void)merge:(id)arg1;
- (_Bool)isUISupported;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 messageSyncState:(unsigned long long)arg4;

@end
