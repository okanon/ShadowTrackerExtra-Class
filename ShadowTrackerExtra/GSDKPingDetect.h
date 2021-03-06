//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSDKSimplePingDelegate-Protocol.h"

@class GSDKSimplePing, NSMutableDictionary, NSString;

@interface GSDKPingDetect : NSObject <GSDKSimplePingDelegate>
{
    NSMutableDictionary *_consumeTime;
    NSMutableDictionary *_startTime;
    NSString *_ip;
    GSDKSimplePing *_pinger;
}

+ (void)pingDetectThreadEntryPoint:(id)arg1;
+ (id)pingDetectThread;
+ (id)sharedInstance;
@property(retain, nonatomic) GSDKSimplePing *pinger; // @synthesize pinger=_pinger;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSMutableDictionary *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *consumeTime; // @synthesize consumeTime=_consumeTime;
- (void).cxx_destruct;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)sendPing;
- (id)Completation;
- (void)stopPingSocket;
- (void)ping;
- (void)isPingConnect:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

