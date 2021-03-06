//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIRConnectorUtils : NSObject
{
}

+ (_Bool)isUserPropertyAllowed:(id)arg1 withOrigin:(id)arg2;
+ (_Bool)shouldLogEventWithName:(id)arg1 parameters:(id)arg2;
+ (_Bool)isEventNameAllowedForListeners:(id)arg1;
+ (_Bool)isListenerOriginAllowed:(id)arg1;
+ (_Bool)isOriginAllowed:(id)arg1;
+ (id)hiddenEventNames;
+ (id)blacklistedUserPropertyPatterns;
+ (id)blacklistedUserProperties;
+ (id)blacklistedParameters;
+ (id)blacklistedEventNames;
+ (id)blacklistedOrigins;
+ (id)allowedListenerOrigins;

@end

