//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface GADActionURLHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _bufferActionsPaused;
    NSMutableArray *_bufferedURLRequests;
    id <GADEventContextSource> _messageSource;
}

- (void).cxx_destruct;
- (void)resumeBufferedActions;
- (void)pauseBufferedActions;
- (void)handleActionURLRequest:(id)arg1;
- (void)dealloc;
- (id)initWithMessageSource:(id)arg1;

@end
