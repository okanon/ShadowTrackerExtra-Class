//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface GGConfigHelper : NSObject
{
    NSDictionary *_config;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)getConfig:(id)arg1;
- (_Bool)initWithConfigName:(id)arg1;

@end
