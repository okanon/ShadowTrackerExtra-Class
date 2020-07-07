//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XYYTextLayout;

@interface VLOptionItemViewModel : NSObject
{
    _Bool _isAppeared;
    NSString *_optionId;
    NSString *_text;
    NSString *_questionId;
    NSString *_answerId;
    XYYTextLayout *_textLayout;
}

@property(retain, nonatomic) XYYTextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) _Bool isAppeared; // @synthesize isAppeared=_isAppeared;
@property(copy, nonatomic) NSString *answerId; // @synthesize answerId=_answerId;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *optionId; // @synthesize optionId=_optionId;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize cellSize;
- (id)initWithModel:(id)arg1;

@end
