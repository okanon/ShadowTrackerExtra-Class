//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstanceIDCheckinStore, FIRInstanceIDTokenStore;
@protocol FIRInstanceIDStoreDelegate;

@interface FIRInstanceIDStore : NSObject
{
    NSObject<FIRInstanceIDStoreDelegate> *_delegate;
    FIRInstanceIDCheckinStore *_checkinStore;
    FIRInstanceIDTokenStore *_tokenStore;
}

+ (_Bool)removeSubDirectory:(id)arg1 error:(id *)arg2;
+ (_Bool)createSubDirectory:(id)arg1;
+ (id)pathForSupportSubDirectory:(id)arg1;
+ (unsigned long long)supportedDirectory;
+ (_Bool)hasSubDirectory:(id)arg1;
@property(retain, nonatomic) FIRInstanceIDTokenStore *tokenStore; // @synthesize tokenStore=_tokenStore;
@property(retain, nonatomic) FIRInstanceIDCheckinStore *checkinStore; // @synthesize checkinStore=_checkinStore;
@property(readonly, nonatomic) __weak NSObject<FIRInstanceIDStoreDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeCheckinPreferencesWithHandler:(CDUnknownBlockType)arg1;
- (id)cachedCheckinPreferences;
- (void)saveCheckinPreferences:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeAllCachedTokensWithHandler:(CDUnknownBlockType)arg1;
- (void)removeCachedTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (void)saveTokenInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)cachedTokenInfos;
- (id)tokenInfoWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (void)resetCredentialsIfNeeded;
- (id)initWithCheckinStore:(id)arg1 tokenStore:(id)arg2 delegate:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

