//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GGAWSTransferUtility : NSObject
{
}

+ (void)setCurrentDownloadReq:(id)arg1;
+ (id)currentDownloadReq;
+ (void)setCurrentUploadReq:(id)arg1;
+ (id)currentUploadReq;
+ (void)EndTimer;
+ (void)StartTimerWithTimeoutHanlder:(CDUnknownBlockType)arg1;
+ (void)CancelDownloadByTransferManager;
+ (void)CancelUploadByTransferManager;
+ (void)CancelAll;
+ (void)downladByTransferManagerWithKey:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 progressHanlder:(CDUnknownBlockType)arg4;
+ (void)downloadBinaryDataWithKey:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 progressHanlder:(CDUnknownBlockType)arg4;
+ (void)uploadByTransferManager:(id)arg1 key:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 progressHanlder:(CDUnknownBlockType)arg5;
+ (void)uploadBinaryData:(id)arg1 key:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 progressHanlder:(CDUnknownBlockType)arg5;

@end

