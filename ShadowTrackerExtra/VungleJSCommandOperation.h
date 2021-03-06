//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VungleOperation.h"

@class NSDictionary, NSString, VungleWebViewFacade;
@protocol VungleJSCommandDelegate><VungleMRAIDCommandDelegate;

@interface VungleJSCommandOperation : VungleOperation
{
    _Bool _isArbitraryJavascript;
    id <VungleJSCommandDelegate><VungleMRAIDCommandDelegate> _delegate;
    CDUnknownBlockType _resultBlock;
    NSString *_command;
    NSDictionary *_parameters;
    VungleWebViewFacade *_webViewFacade;
}

@property(retain, nonatomic) VungleWebViewFacade *webViewFacade; // @synthesize webViewFacade=_webViewFacade;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(nonatomic) _Bool isArbitraryJavascript; // @synthesize isArbitraryJavascript=_isArbitraryJavascript;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(nonatomic) __weak id <VungleJSCommandDelegate><VungleMRAIDCommandDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)constructJavascriptExpression;
- (void)execute;
- (void)finishWithErrors:(id)arg1;
- (id)initWithCommand:(id)arg1 parameters:(id)arg2 webViewFacade:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)initWithCommand:(id)arg1 parameters:(id)arg2 webViewFacade:(id)arg3;

@end

