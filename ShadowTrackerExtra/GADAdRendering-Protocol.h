//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADServerTransaction;

@protocol GADAdRendering <NSObject>
+ (id)alloc;
- (void)renderWithServerTransaction:(GADServerTransaction *)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(void (^)(NSArray *, NSArray *, struct NSDictionary *))arg3;

@optional
- (void)invalidateAndCancel;
@end
