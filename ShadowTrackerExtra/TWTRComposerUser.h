//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSETwitterUser.h"

@class NSString, NSURL;

@interface TWTRComposerUser : NSObject <TSETwitterUser>
{
    _Bool _verified;
    NSString *_fullName;
    NSURL *_avatarURL;
    long long _userID;
    NSString *_username;
}

@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
