//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"
#import "VungleNativeCommandHandlerDelegate.h"
#import "WKNavigationDelegate.h"

@class NSString, VungleNativeCommandHandler, VungleWebViewFacade;

@interface VungleMRAIDBridge : NSObject <UIWebViewDelegate, WKNavigationDelegate, VungleNativeCommandHandlerDelegate>
{
    _Bool _isConsentDialogRequired;
    id <VungleMRAIDBridgeDelegate> _delegate;
    id <VungleMRAIDReportBuilderProtocol> _reportBuilderDelegate;
    VungleWebViewFacade *_webViewFacade;
    VungleNativeCommandHandler *_commandHandler;
}

+ (id)parseParametersFromRequest:(id)arg1;
+ (id)parseCommandFromRequest:(id)arg1;
@property(nonatomic) _Bool isConsentDialogRequired; // @synthesize isConsentDialogRequired=_isConsentDialogRequired;
@property(retain, nonatomic) VungleNativeCommandHandler *commandHandler; // @synthesize commandHandler=_commandHandler;
@property(retain, nonatomic) VungleWebViewFacade *webViewFacade; // @synthesize webViewFacade=_webViewFacade;
@property(nonatomic) __weak id <VungleMRAIDReportBuilderProtocol> reportBuilderDelegate; // @synthesize reportBuilderDelegate=_reportBuilderDelegate;
@property(nonatomic) __weak id <VungleMRAIDBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)localAdTemplateRequestErrorWithError:(id)arg1;
- (id)MRAIDJSInjectionError;
- (void)commandHandlerHandlePresentStoreView;
- (void)commandHandler:(id)arg1 handlePrepareStoreViewWithAppStoreID:(id)arg2;
- (void)commandHandler:(id)arg1 handleErrorCode:(id)arg2;
- (void)commandHandler:(id)arg1 handleSuccessfulView:(_Bool)arg2;
- (void)commandHandler:(id)arg1 handleUIAction:(id)arg2 withValue:(id)arg3;
- (void)commandHandler:(id)arg1 handleUIAction:(id)arg2;
- (void)commandHandler:(id)arg1 handleConsentAction:(id)arg2;
- (void)commandHandler:(id)arg1 handleTPAT:(id)arg2;
- (void)commandHandler:(id)arg1 handleMRAIDSetOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2;
- (void)commandHandler:(id)arg1 handleMRAIDCustomClose:(long long)arg2;
- (void)commandHandler:(id)arg1 handleMRAIDOpenCallForURL:(id)arg2;
- (void)commandHandlerHandleMRAIDClose:(id)arg1;
- (id)propertiesChangeJSExpressionWithProperties:(id)arg1;
- (id)readyJSExpressionWithCacheableReplacements:(id)arg1 nonCacheableReplacements:(id)arg2;
- (_Bool)handleBridgeActionWithRequest:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (CDUnknownBlockType)finishResultBlock;
- (void)dispatchStoreViewSuccessful;
- (void)dispatchPropertiesChangeWithDictionary:(id)arg1;
- (void)loadHTMLFileWithURL:(id)arg1 cacheableReplacements:(id)arg2 nonCacheableReplacements:(id)arg3 viewProperties:(id)arg4;
- (id)initWithWebViewFacade:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
