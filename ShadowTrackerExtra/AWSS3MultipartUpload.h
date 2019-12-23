//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Initiator, AWSS3Owner, NSDate, NSString;

@interface AWSS3MultipartUpload : AWSModel
{
    NSDate *_initiated;
    AWSS3Initiator *_initiator;
    NSString *_key;
    AWSS3Owner *_owner;
    long long _storageClass;
    NSString *_uploadId;
}

+ (id)storageClassJSONTransformer;
+ (id)ownerJSONTransformer;
+ (id)initiatorJSONTransformer;
+ (id)initiatedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(nonatomic) long long storageClass; // @synthesize storageClass=_storageClass;
@property(retain, nonatomic) AWSS3Owner *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) AWSS3Initiator *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) NSDate *initiated; // @synthesize initiated=_initiated;
- (void).cxx_destruct;

@end
