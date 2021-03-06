//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString, TWTRServerTrustEvaluator;

@interface TWTRURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    TWTRServerTrustEvaluator *_trustEvaluator;
}

@property(readonly, nonatomic) TWTRServerTrustEvaluator *trustEvaluator; // @synthesize trustEvaluator=_trustEvaluator;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

