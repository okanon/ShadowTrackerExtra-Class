//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSURLCredential, NSURLRequest, NSURLSession, NSURLSessionTask;

@protocol SDWebImageDownloaderOperationInterface <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
- (_Bool)cancel:(id)arg1;
- (void)setCredential:(NSURLCredential *)arg1;
- (NSURLCredential *)credential;
- (void)setShouldDecompressImages:(_Bool)arg1;
- (_Bool)shouldDecompressImages;
- (id)addHandlersForProgress:(void (^)(long long, long long, NSURL *))arg1 completed:(void (^)(UIImage *, NSData *, NSError *, _Bool))arg2;
- (id)initWithRequest:(NSURLRequest *)arg1 inSession:(NSURLSession *)arg2 options:(unsigned long long)arg3;

@optional
- (NSURLSessionTask *)dataTask;
@end
