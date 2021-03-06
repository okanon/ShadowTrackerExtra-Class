//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADAnimationConfig : NSObject
{
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
}

+ (id)animationConfigsFromAnimations:(id)arg1;
@property(readonly, nonatomic) struct CGRect finalFrame; // @synthesize finalFrame=_finalFrame;
@property(readonly, nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
- (id)initWithInitialFrameDictionary:(id)arg1 finalFrameDictionary:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

