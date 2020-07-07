//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError, NSObject, NSString, NSURL, NSURLResponse, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface XCDURLGETOperation : NSOperation <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSURL *_url;
    NSDictionary *_info;
    NSArray *_cookies;
    NSURLResponse *_response;
    NSError *_error;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_operationStartSemaphore;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly) NSObject<OS_dispatch_semaphore> *operationStartSemaphore; // @synthesize operationStartSemaphore=_operationStartSemaphore;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, copy) NSArray *cookies; // @synthesize cookies=_cookies;
@property(readonly, copy) NSDictionary *info; // @synthesize info=_info;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startRequest;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithURL:(id)arg1 info:(id)arg2 cookes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
