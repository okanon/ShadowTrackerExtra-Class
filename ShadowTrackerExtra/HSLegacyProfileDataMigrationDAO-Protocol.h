//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HSLegacyProfile, NSArray, NSString;

@protocol HSLegacyProfileDataMigrationDAO <NSObject>
- (_Bool)updateMigrationState:(unsigned long long)arg1 forIdentifier:(NSString *)arg2;
- (_Bool)deleteLegacyProfile:(NSString *)arg1;
- (HSLegacyProfile *)fetchLegacyProfile:(NSString *)arg1;
- (void)storeLegacyProfiles:(NSArray *)arg1;
@end

