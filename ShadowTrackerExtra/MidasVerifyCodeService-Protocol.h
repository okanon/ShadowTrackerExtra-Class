//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidasServiceProtocol-Protocol.h"

@protocol MidasIAPOperationProtocol;

@protocol MidasVerifyCodeService <MidasServiceProtocol>
- (void)showPageWithOperation:(id <MidasIAPOperationProtocol>)arg1 webViewClosedBlock:(void (^)(void))arg2;
@end

