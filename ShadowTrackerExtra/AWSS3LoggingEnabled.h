//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSS3LoggingEnabled : AWSModel
{
    NSString *_targetBucket;
    NSArray *_targetGrants;
    NSString *_targetPrefix;
}

+ (id)targetGrantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *targetPrefix; // @synthesize targetPrefix=_targetPrefix;
@property(retain, nonatomic) NSArray *targetGrants; // @synthesize targetGrants=_targetGrants;
@property(retain, nonatomic) NSString *targetBucket; // @synthesize targetBucket=_targetBucket;
- (void).cxx_destruct;

@end
