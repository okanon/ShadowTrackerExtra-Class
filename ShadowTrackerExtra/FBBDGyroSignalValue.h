//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBBDGyroSignalValue : NSObject
{
    CDStruct_31142d93 _rotationRate;
    double _minRotationRate;
}

@property(readonly, nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
- (id)gyroValueDict;
- (_Bool)isEqualToGyroValue:(id)arg1;
- (id)initWithRotationRate:(CDStruct_31142d93)arg1 withMinimumGyroRotationRate:(double)arg2;

@end

