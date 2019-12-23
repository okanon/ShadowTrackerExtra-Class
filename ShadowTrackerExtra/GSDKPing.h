//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSDKSimplePingDelegate.h"

@class GSDKSimplePing, NSMutableArray, NSMutableDictionary, NSString;

@interface GSDKPing : NSObject <GSDKSimplePingDelegate>
{
    NSMutableArray *_ping_numList;
    NSMutableDictionary *_time;
    NSString *_router;
    GSDKSimplePing *_pinger;
}

+ (void)pingThreadEntryPoint:(id)arg1;
+ (id)pingThread;
+ (id)sharedInstance;
@property(retain, nonatomic) GSDKSimplePing *pinger; // @synthesize pinger=_pinger;
@property(retain, nonatomic) NSString *router; // @synthesize router=_router;
@property(retain, nonatomic) NSMutableDictionary *time; // @synthesize time=_time;
@property(retain, nonatomic) NSMutableArray *ping_numList; // @synthesize ping_numList=_ping_numList;
- (void).cxx_destruct;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)sendPing;
- (id)stopPing;
- (void)stopPingSocket;
- (void)ping;
- (void)startPing:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
