//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSResourceDownloadReceipt, NSDictionary, NSObject<OS_dispatch_queue>, NSURL;

@protocol HSResourceDownloaderInterface <NSObject>
- (void)cancelDownloadForReceipt:(HSResourceDownloadReceipt *)arg1;
- (HSResourceDownloadReceipt *)downloadResourceForURL:(NSURL *)arg1 additionalInfo:(NSDictionary *)arg2 progressHandler:(void (^)(long long, long long))arg3 completionHandler:(void (^)(id <HSResource>, NSError *))arg4 handlerQueue:(NSObject<OS_dispatch_queue> *)arg5;
@end
