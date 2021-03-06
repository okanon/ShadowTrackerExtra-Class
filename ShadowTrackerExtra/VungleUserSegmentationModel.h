//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "VNGPersistable-Protocol.h"

@class NSDictionary, NSString;

@interface VungleUserSegmentationModel : NSObject <NSCoding, VNGPersistable>
{
    _Bool _payingUser;
    _Bool _viral;
    unsigned long long _daysInApp;
    unsigned long long _consecutiveDaysInApp;
    unsigned long long _adsClicked;
    unsigned long long _lastOpen;
}

+ (id)key;
+ (id)category;
+ (long long)channel;
@property(nonatomic) unsigned long long lastOpen; // @synthesize lastOpen=_lastOpen;
@property(nonatomic, getter=isViral) _Bool viral; // @synthesize viral=_viral;
@property(nonatomic) unsigned long long adsClicked; // @synthesize adsClicked=_adsClicked;
@property(nonatomic) unsigned long long consecutiveDaysInApp; // @synthesize consecutiveDaysInApp=_consecutiveDaysInApp;
@property(nonatomic) unsigned long long daysInApp; // @synthesize daysInApp=_daysInApp;
@property(nonatomic, getter=isPayingUser) _Bool payingUser; // @synthesize payingUser=_payingUser;
- (id)persistenceKey;
- (id)persistenceCategory;
- (long long)persistenceChannel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *jsonDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

