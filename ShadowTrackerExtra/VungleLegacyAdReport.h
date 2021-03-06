//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VungleAdReport.h"

#import "VungleReportable-Protocol.h"

@class NSMutableArray, NSMutableOrderedSet, NSString;

@interface VungleLegacyAdReport : VungleAdReport <VungleReportable>
{
    _Bool _didTapCTAButton;
    _Bool _internalIncentivized;
    NSString *_url;
    NSMutableArray *_clickSequence;
    NSMutableOrderedSet *_viewEvents;
}

@property(nonatomic) _Bool internalIncentivized; // @synthesize internalIncentivized=_internalIncentivized;
@property(retain, nonatomic) NSMutableOrderedSet *viewEvents; // @synthesize viewEvents=_viewEvents;
@property(retain, nonatomic) NSMutableArray *clickSequence; // @synthesize clickSequence=_clickSequence;
@property(nonatomic) _Bool didTapCTAButton; // @synthesize didTapCTAButton=_didTapCTAButton;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)placement;
- (void)setPublisherInformation:(id)arg1;
- (void)setExtraInformation:(id)arg1;
- (void)setPlacement:(id)arg1;
- (void)setDeviceInformation:(id)arg1;
- (id)uniqueIdentifier;
- (id)toDictionary;
- (_Bool)isAdExperienceSuccessful;
- (unsigned long long)duration;
- (_Bool)incentivized;
- (void)addClickSequence:(id)arg1;
- (void)updateViewEventsWith:(id)arg1;
- (id)initWithPlacement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

