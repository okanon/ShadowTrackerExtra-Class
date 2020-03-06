//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface TPreferenceDataStore : NSObject
{
    NSUserDefaults *_defaults;
    NSString *_keyPrefix;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *keyPrefix; // @synthesize keyPrefix=_keyPrefix;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void).cxx_destruct;
- (void)removeAll;
- (void)removeObjectForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)prefixKey:(id)arg1;
- (id)initInstance;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
