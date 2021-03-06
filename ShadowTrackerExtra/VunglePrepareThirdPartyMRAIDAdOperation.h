//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VungleOperation.h"

@class NSFileManager, VungleThirdPartyMRAIDAd;

@interface VunglePrepareThirdPartyMRAIDAdOperation : VungleOperation
{
    NSFileManager *_fileManager;
    VungleThirdPartyMRAIDAd *_thirdPartyAd;
    CDUnknownBlockType _completionHandler;
}

+ (id)localIndexCreationErrorWithUserInfo:(id)arg1;
+ (id)campaignDirectoryCreationErrorWithUserInfo:(id)arg1;
+ (id)invalidBase64Error;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak VungleThirdPartyMRAIDAd *thirdPartyAd; // @synthesize thirdPartyAd=_thirdPartyAd;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (_Bool)writeIndexHTMLFileWithBaseURL:(id)arg1 markup:(id)arg2 ad:(id)arg3;
- (id)createCampaignDirectoryWithAd:(id)arg1;
- (id)decodeHTMLWithAd:(id)arg1;
- (id)expectedLocalIndexURLWithCampaignID:(id)arg1;
- (void)finishOperationWithInvalidAd:(id)arg1 error:(id)arg2;
- (void)execute;
- (id)initWithVungleMRAIDAd:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

