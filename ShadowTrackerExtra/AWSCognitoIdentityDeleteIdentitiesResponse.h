//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSModel.h"

@class NSArray;

@interface AWSCognitoIdentityDeleteIdentitiesResponse : AWSModel
{
    NSArray *_unprocessedIdentityIds;
}

+ (id)unprocessedIdentityIdsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *unprocessedIdentityIds; // @synthesize unprocessedIdentityIds=_unprocessedIdentityIds;
- (void).cxx_destruct;

@end

