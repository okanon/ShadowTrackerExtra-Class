//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, VLConnectingView, VLDialogView, VLInputToolsView, VLSideMenuView;

@interface VLMainView : UIView
{
    VLConnectingView *_connectingView;
    VLSideMenuView *_sideMenu;
    VLDialogView *_dialogView;
    UIButton *_closeButton;
    VLInputToolsView *_inputTools;
    UIView *_touchView;
    NSLayoutConstraint *_inputTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *inputTopConstraint; // @synthesize inputTopConstraint=_inputTopConstraint;
@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) VLInputToolsView *inputTools; // @synthesize inputTools=_inputTools;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) VLDialogView *dialogView; // @synthesize dialogView=_dialogView;
@property(retain, nonatomic) VLSideMenuView *sideMenu; // @synthesize sideMenu=_sideMenu;
@property(retain, nonatomic) VLConnectingView *connectingView; // @synthesize connectingView=_connectingView;
- (void).cxx_destruct;
- (void)touchViewTapped;
- (void)makeConstraints;
- (void)setUpViews;
- (void)changeCloseButonToBack;
- (void)updateInputToolsByKeyboardHeight:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

