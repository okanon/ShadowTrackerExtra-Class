//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSString;

@protocol GADJSCoreLocalStorageProtocol <JSExport>
- (void)clear;
- (void)removeItemForKey:(NSString *)arg1;
- (void)setItemForKey:(NSString *)arg1 item:(NSString *)arg2;
- (NSString *)itemForKey:(NSString *)arg1;

@optional
- (void)removeItemForKey:(NSString *)arg1 __JS_EXPORT_AS__removeItem:(id)arg2;
- (void)setItemForKey:(NSString *)arg1 item:(NSString *)arg2 __JS_EXPORT_AS__setItem:(id)arg3;
- (NSString *)itemForKey:(NSString *)arg1 __JS_EXPORT_AS__getItem:(id)arg2;
@end

