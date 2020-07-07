//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VLInitRespModel : NSObject
{
    _Bool _isLoadingShowing;
    NSString *_gameId;
    NSString *_source;
    NSString *_certificate;
    NSString *_openId;
    NSString *_questionId;
    NSString *_answerId;
    NSString *_createTime;
    NSString *_sessionId;
    NSString *_modeType;
    NSString *_imStatus;
    NSString *_question;
    NSString *_imSessionId;
    NSString *_setId;
    NSString *_robotType;
    NSArray *_answer;
    NSArray *_option;
    long long _imLimitNum;
    long long _longTextLimitNum;
    long long _unreadMsgNum;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property long long unreadMsgNum; // @synthesize unreadMsgNum=_unreadMsgNum;
@property long long longTextLimitNum; // @synthesize longTextLimitNum=_longTextLimitNum;
@property long long imLimitNum; // @synthesize imLimitNum=_imLimitNum;
@property _Bool isLoadingShowing; // @synthesize isLoadingShowing=_isLoadingShowing;
@property(retain) NSArray *option; // @synthesize option=_option;
@property(retain) NSArray *answer; // @synthesize answer=_answer;
@property(retain) NSString *robotType; // @synthesize robotType=_robotType;
@property(retain) NSString *setId; // @synthesize setId=_setId;
@property(retain) NSString *imSessionId; // @synthesize imSessionId=_imSessionId;
@property(retain) NSString *question; // @synthesize question=_question;
@property(retain) NSString *imStatus; // @synthesize imStatus=_imStatus;
@property(retain) NSString *modeType; // @synthesize modeType=_modeType;
@property(retain) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain) NSString *answerId; // @synthesize answerId=_answerId;
@property(retain) NSString *questionId; // @synthesize questionId=_questionId;
@property(retain) NSString *openId; // @synthesize openId=_openId;
@property(retain) NSString *certificate; // @synthesize certificate=_certificate;
@property(retain) NSString *source; // @synthesize source=_source;
@property(retain) NSString *gameId; // @synthesize gameId=_gameId;
- (void).cxx_destruct;

@end
