//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, GADScheduler, UIView;

@interface GADAdLoadMonitor : NSObject
{
    GADObserverCollection *_observers;
    CDUnknownBlockType _completionHandler;
    unsigned long long _unmatchedStartDelayCount;
    _Bool _assetsDidFinishLoad;
    GADScheduler *_scheduler;
    _Bool _viewRenderedCheckComplete;
    UIView *_monitoredView;
}

- (void).cxx_destruct;
- (void)loadingAndRenderingCompletedWithError:(id)arg1;
- (void)updateLoadStatusWithError:(id)arg1;
- (void)assetsDidFinishLoadWithError:(id)arg1;
- (void)updateViewRenderedStatus;
- (void)handleDelayLoadWithParameters:(id)arg1;
- (id)initWithMessageSource:(id)arg1 view:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

