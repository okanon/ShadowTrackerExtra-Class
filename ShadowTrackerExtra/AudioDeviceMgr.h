//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AudioDeviceMgr : NSObject
{
}

+ (id)shareInstance;
- (void)AudioRouteChangeListenerPause:(_Bool)arg1;
- (void)UpdateDeviceState:(int)arg1;
- (void)EnableBluetoothSCO:(_Bool)arg1;
- (int)GetAudioDeviceConnectState;
- (void)AudioReceiverSwitchToSpeaker;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)dealloc;
- (void)AddAudioRouteChangeListener;

@end

