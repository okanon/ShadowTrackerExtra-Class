//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MidasIAPBaseReq, MidasIAPUserInfo, MidasIapOrderInfo, NSArray, NSError, RequestInfo, SKPaymentQueue;
@protocol MidasIAPPayDelegate;

@protocol MidasIAPOperationProtocol <NSObject>
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo;
@property(retain, nonatomic) MidasIAPUserInfo *userInfo;
@property(retain, nonatomic) MidasIAPBaseReq *req;
@property(nonatomic) __weak id <MidasIAPPayDelegate> outerDelegate;
@property(nonatomic) __weak id delegate;
- (void)onDestroy;
- (RequestInfo *)toRequestInfo;
- (_Bool)midas_paymentQueue:(SKPaymentQueue *)arg1 midas_updatedTransactions:(NSArray *)arg2;
- (void)start;

@optional
- (void)midas_paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentQueue *)arg1;
- (void)midas_paymentQueue:(SKPaymentQueue *)arg1 midas_restoreCompletedTransactionsFailedWithError:(NSError *)arg2;
@end

