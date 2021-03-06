//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNetworkUtilizationStatistics, GADObserverCollection;
@protocol OS_dispatch_queue;

@interface GADNetworkUtilizationMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADNetworkUtilizationStatistics *_aggregatedStatistics;
    GADNetworkUtilizationStatistics *_initialStatistics;
    GADObserverCollection *_observers;
}

- (void).cxx_destruct;
@property(readonly) long long wifiReceivedByteCount;
@property(readonly) long long wifiTransmittedByteCount;
@property(readonly) long long cellularReceivedByteCount;
@property(readonly) long long cellularTransmittedByteCount;
- (void)updateByteCounts;
- (void)stop;
- (void)start;
- (id)init;

@end

