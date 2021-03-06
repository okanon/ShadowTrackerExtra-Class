//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class NSDictionary, NSString;

@interface AWSCognitoIdentityGetIdInput : AWSRequest
{
    NSString *_accountId;
    NSString *_identityPoolId;
    NSDictionary *_logins;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *logins; // @synthesize logins=_logins;
@property(retain, nonatomic) NSString *identityPoolId; // @synthesize identityPoolId=_identityPoolId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;

@end

