//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@interface FLWeakProxy : NSProxy
{
    id _target;
}

+ (id)weakProxyForObject:(id)arg1;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end
