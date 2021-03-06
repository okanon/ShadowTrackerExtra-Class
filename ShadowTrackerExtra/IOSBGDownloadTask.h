//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionDownloadTask.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class GCloudBGApplication, NSMutableDictionary, NSString, NSURLSession, NSURLSessionConfiguration;

@interface IOSBGDownloadTask : NSURLSessionDownloadTask <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    _Bool _blCancelTask;
    NSURLSessionConfiguration *_sessionConfig;
    NSURLSession *_backgroundSession;
    double _timeInterval;
    long long _nCompleted;
    long long _nFailed;
    long long _nTotal;
    NSMutableDictionary *_backgroundDownloadTasks;
    GCloudBGApplication *_theApp;
}

@property(retain, nonatomic) GCloudBGApplication *theApp; // @synthesize theApp=_theApp;
@property(retain, nonatomic) NSMutableDictionary *backgroundDownloadTasks; // @synthesize backgroundDownloadTasks=_backgroundDownloadTasks;
@property(nonatomic) long long nTotal; // @synthesize nTotal=_nTotal;
@property(nonatomic) long long nFailed; // @synthesize nFailed=_nFailed;
@property(nonatomic) long long nCompleted; // @synthesize nCompleted=_nCompleted;
@property(nonatomic) _Bool blCancelTask; // @synthesize blCancelTask=_blCancelTask;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didCompleteInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)CreateNextSessionTask:(id)arg1;
- (void)CancelTask;
- (void)CreateDownloadTaskWithResumeData:(id)arg1 withOffset:(long long)arg2 withLength:(long long)arg3 withResumeData:(id)arg4 withDescription:(id)arg5;
- (void)CreateDownloadTaskWithResumeData:(id)arg1 withOffset:(long long)arg2 withLength:(long long)arg3 withSavePath:(id)arg4 withTotal:(long long)arg5 withResumeData:(id)arg6 withBGDownloadType:(id)arg7;
- (void)CreateDownloadTask:(id)arg1 withOffset:(long long)arg2 withLength:(long long)arg3 withDescription:(id)arg4;
- (void)CreateDownloadTask:(id)arg1 withOffset:(long long)arg2 withLength:(long long)arg3 withSavePath:(id)arg4 withTotal:(long long)arg5 withBGDownloadType:(id)arg6;
- (void)CreateSession:(id)arg1;
- (void)SetBGApplication:(id)arg1;
- (void)releaseAll;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

