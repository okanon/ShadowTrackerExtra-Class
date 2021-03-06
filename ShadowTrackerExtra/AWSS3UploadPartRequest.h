//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class NSNumber, NSString;

@interface AWSS3UploadPartRequest : AWSRequest
{
    id _body;
    NSString *_bucket;
    NSNumber *_contentLength;
    NSString *_contentMD5;
    NSString *_key;
    NSNumber *_partNumber;
    long long _requestPayer;
    NSString *_SSECustomerAlgorithm;
    NSString *_SSECustomerKey;
    NSString *_SSECustomerKeyMD5;
    NSString *_uploadId;
}

+ (id)requestPayerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSString *SSECustomerKeyMD5; // @synthesize SSECustomerKeyMD5=_SSECustomerKeyMD5;
@property(retain, nonatomic) NSString *SSECustomerKey; // @synthesize SSECustomerKey=_SSECustomerKey;
@property(retain, nonatomic) NSString *SSECustomerAlgorithm; // @synthesize SSECustomerAlgorithm=_SSECustomerAlgorithm;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSNumber *partNumber; // @synthesize partNumber=_partNumber;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) id body; // @synthesize body=_body;
- (void).cxx_destruct;

@end

