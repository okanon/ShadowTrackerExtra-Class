//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FIRMessagingPersistentSyncMessage : NSObject
{
    _Bool _apnsReceived;
    _Bool _mcsReceived;
    NSString *_rmqID;
    long long _expirationTime;
}

@property(nonatomic) long long expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) _Bool mcsReceived; // @synthesize mcsReceived=_mcsReceived;
@property(nonatomic) _Bool apnsReceived; // @synthesize apnsReceived=_apnsReceived;
@property(retain, nonatomic) NSString *rmqID; // @synthesize rmqID=_rmqID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithRMQID:(id)arg1 expirationTime:(long long)arg2;
- (id)init;

@end

