//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (FIRMessaging)
+ (id)fcm_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithFCMErrorCode:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long fcmErrorCode;
@end

