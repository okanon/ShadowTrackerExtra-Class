//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsMessageDM.h"

@interface HsScreenshotRequestMessageDM : HsMessageDM
{
    _Bool _isAnswered;
    _Bool _isAttachmentButtonTappable;
}

@property(nonatomic) _Bool isAttachmentButtonTappable; // @synthesize isAttachmentButtonTappable=_isAttachmentButtonTappable;
@property(nonatomic) _Bool isAnswered; // @synthesize isAnswered=_isAnswered;
- (void)merge:(id)arg1;
@property(readonly, nonatomic) _Bool isScreenShotRequestViewStateInteractive;
- (_Bool)isUISupported;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 isAnswered:(_Bool)arg4;

@end

