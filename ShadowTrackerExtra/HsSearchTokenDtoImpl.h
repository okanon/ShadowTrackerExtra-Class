//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsSearchTokenDto.h"

@class NSDictionary, NSString;

@interface HsSearchTokenDtoImpl : NSObject <HsSearchTokenDto>
{
    int _type;
    NSString *_value;
    NSDictionary *_score;
}

@property(retain, nonatomic) NSDictionary *score; // @synthesize score=_score;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)setScores:(id)arg1;
- (id)scores;
- (id)initWithValue:(id)arg1 type:(int)arg2;
- (id)initWithValue:(id)arg1 type:(int)arg2 scores:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
