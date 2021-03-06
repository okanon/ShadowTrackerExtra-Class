//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsBaseUIView.h"

#import "UISearchBarDelegate-Protocol.h"

@class HsListPickerHeaderAnimatableProperties, NSLayoutConstraint, NSString, UIButton, UILabel, UINavigationController, UISearchBar, UIView, UIViewPropertyAnimator;
@protocol HsListPickerHeaderViewListener;

@interface HsListPickerHeaderView : HsBaseUIView <UISearchBarDelegate>
{
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UIButton *_searchButton;
    UISearchBar *_searchBar;
    NSLayoutConstraint *_titleLabelLeftConstraint;
    NSLayoutConstraint *_titleLabelCenterConstraint;
    NSLayoutConstraint *_titleLblTrailingToSearchBtnConstraint;
    NSLayoutConstraint *_titleLblLeadingToCancelBtnConstraint;
    NSLayoutConstraint *_titleLabelRightConstraint;
    UIView *_listPickerContainerView;
    NSString *_title;
    id <HsListPickerHeaderViewListener> _listener;
    UINavigationController *_hsNavigationController;
    CDUnknownBlockType _animationCompletionStart;
    CDUnknownBlockType _animationCompletionEnd;
    UIViewPropertyAnimator *_animator;
    long long _positionWhenAnimatorCreated;
    HsListPickerHeaderAnimatableProperties *_collapsedStateProperties;
    HsListPickerHeaderAnimatableProperties *_expandedStateProperties;
}

@property(retain, nonatomic) HsListPickerHeaderAnimatableProperties *expandedStateProperties; // @synthesize expandedStateProperties=_expandedStateProperties;
@property(retain, nonatomic) HsListPickerHeaderAnimatableProperties *collapsedStateProperties; // @synthesize collapsedStateProperties=_collapsedStateProperties;
@property(nonatomic) long long positionWhenAnimatorCreated; // @synthesize positionWhenAnimatorCreated=_positionWhenAnimatorCreated;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(copy, nonatomic) CDUnknownBlockType animationCompletionEnd; // @synthesize animationCompletionEnd=_animationCompletionEnd;
@property(copy, nonatomic) CDUnknownBlockType animationCompletionStart; // @synthesize animationCompletionStart=_animationCompletionStart;
@property(nonatomic) __weak UINavigationController *hsNavigationController; // @synthesize hsNavigationController=_hsNavigationController;
@property(nonatomic) __weak id <HsListPickerHeaderViewListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak UIView *listPickerContainerView; // @synthesize listPickerContainerView=_listPickerContainerView;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelRightConstraint; // @synthesize titleLabelRightConstraint=_titleLabelRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLblLeadingToCancelBtnConstraint; // @synthesize titleLblLeadingToCancelBtnConstraint=_titleLblLeadingToCancelBtnConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLblTrailingToSearchBtnConstraint; // @synthesize titleLblTrailingToSearchBtnConstraint=_titleLblTrailingToSearchBtnConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelCenterConstraint; // @synthesize titleLabelCenterConstraint=_titleLabelCenterConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeftConstraint; // @synthesize titleLabelLeftConstraint=_titleLabelLeftConstraint;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)reapplyTheming;
- (_Bool)isListPickerInExpandedState;
- (void)applyAnimatableProperties:(id)arg1;
- (id)expandedBackgroundColor;
- (id)collapsedBackgroundColor;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)dealloc;
- (void)continueAnimationForTargetPosition:(long long)arg1;
- (void)scrubAnimatorToFraction:(double)arg1 currentPosition:(long long)arg2;
- (void)createAnimatorForStartPosition:(long long)arg1 endPosition:(long long)arg2;
- (void)didTapSearchButton:(id)arg1;
- (void)toggleListPickerPosition;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapOnHeader;
- (void)addTapRecognizer;
- (void)applyTheming;
- (void)hideSearchBar;
- (void)showSearchBar;
- (void)applyAccessibility;
- (void)setupUILayoutGuide;
- (void)initialiseDefaults;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

