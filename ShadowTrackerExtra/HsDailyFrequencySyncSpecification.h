//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsSpecification.h"

@class NSString;

@interface HsDailyFrequencySyncSpecification : NSObject <HsSpecification>
{
    NSString *_dataType;
    double _elapsedTimeThreshold;
}

- (void).cxx_destruct;
- (_Bool)isSatisfiedForDataChangeCount:(unsigned long long)arg1 andElapsedTimeSinceSync:(double)arg2;
- (id)getDataType;
- (id)initWithDailyFrequency:(unsigned long long)arg1 forDataType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
