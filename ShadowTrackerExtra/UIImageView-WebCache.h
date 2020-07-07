//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class AFImageDownloadReceipt;

@interface UIImageView (WebCache)
+ (void)setSharedImageDownloader:(id)arg1;
+ (id)sharedImageDownloader;
- (void)sd_cancelCurrentAnimationImagesLoad;
- (id)sd_animationOperationArray;
- (void)sd_setAnimationImagesWithURLs:(id)arg1;
- (void)sd_setImageWithPreviousCachedImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)sd_setImageWithURL:(id)arg1;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setHighlightedImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)sd_setHighlightedImageWithURL:(id)arg1 options:(unsigned long long)arg2;
- (void)sd_setHighlightedImageWithURL:(id)arg1;
@property(retain, nonatomic, setter=af_setActiveImageDownloadReceipt:) AFImageDownloadReceipt *af_activeImageDownloadReceipt;
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1;
- (void)clearActiveDownloadInformation;
- (void)cancelImageDownloadTask;
- (void)setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (_Bool)fbad_containsImage:(id)arg1;
- (void)fbad_setIcon:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end
