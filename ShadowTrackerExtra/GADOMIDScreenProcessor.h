//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOMIDNodeProcessor-Protocol.h"

@class NSString;
@protocol GADOMIDNodeProcessor;

@interface GADOMIDScreenProcessor : NSObject <GADOMIDNodeProcessor>
{
    id <GADOMIDNodeProcessor> _processorForChildren;
}

@property(nonatomic) __weak id <GADOMIDNodeProcessor> processorForChildren; // @synthesize processorForChildren=_processorForChildren;
- (void).cxx_destruct;
- (_Bool)isInternalWindow:(id)arg1;
- (id)orderedChildrenForView:(id)arg1;
- (id)childrenForView:(id)arg1;
- (id)stateForView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

