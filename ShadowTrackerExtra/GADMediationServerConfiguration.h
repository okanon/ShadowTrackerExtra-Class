//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface GADMediationServerConfiguration : NSObject
{
    NSMutableSet *_credentials;
}

- (void).cxx_destruct;
- (void)addMediationCredentials:(id)arg1;
@property(readonly, nonatomic) NSArray *credentials;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

