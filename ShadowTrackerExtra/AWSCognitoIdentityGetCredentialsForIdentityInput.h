//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class NSDictionary, NSString;

@interface AWSCognitoIdentityGetCredentialsForIdentityInput : AWSRequest
{
    NSString *_customRoleArn;
    NSString *_identityId;
    NSDictionary *_logins;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *logins; // @synthesize logins=_logins;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(retain, nonatomic) NSString *customRoleArn; // @synthesize customRoleArn=_customRoleArn;
- (void).cxx_destruct;

@end

