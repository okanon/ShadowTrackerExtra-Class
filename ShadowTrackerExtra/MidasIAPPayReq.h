//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidasIAPBaseReq.h"

@class NSString, UIImage, UIViewController;

@interface MidasIAPPayReq : MidasIAPBaseReq
{
    _Bool _stopPayAfterPossibleReprovide;
    int _productType;
    int _midasUIType;
    NSString *_productId;
    NSString *_saveValue;
    NSString *_drmInfo;
    NSString *_couponInfo;
    UIImage *_resImg;
    NSString *_resData;
    UIViewController *_contextController;
    NSString *_metadata;
}

@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool stopPayAfterPossibleReprovide; // @synthesize stopPayAfterPossibleReprovide=_stopPayAfterPossibleReprovide;
@property(nonatomic) int midasUIType; // @synthesize midasUIType=_midasUIType;
@property(nonatomic) __weak UIViewController *contextController; // @synthesize contextController=_contextController;
@property(copy, nonatomic) NSString *resData; // @synthesize resData=_resData;
@property(retain, nonatomic) UIImage *resImg; // @synthesize resImg=_resImg;
@property(copy, nonatomic) NSString *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(copy, nonatomic) NSString *drmInfo; // @synthesize drmInfo=_drmInfo;
@property(copy, nonatomic) NSString *saveValue; // @synthesize saveValue=_saveValue;
@property(nonatomic) int productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (_Bool)validateParams;
- (id)init;

@end

