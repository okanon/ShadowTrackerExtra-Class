//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSCognitoIdentityLookupDeveloperIdentityResponse : AWSModel
{
    NSArray *_developerUserIdentifierList;
    NSString *_identityId;
    NSString *_nextToken;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *nextToken; // @synthesize nextToken=_nextToken;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(retain, nonatomic) NSArray *developerUserIdentifierList; // @synthesize developerUserIdentifierList=_developerUserIdentifierList;
- (void).cxx_destruct;

@end
