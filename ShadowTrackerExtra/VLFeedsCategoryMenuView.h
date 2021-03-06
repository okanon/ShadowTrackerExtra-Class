//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView;
@protocol VLFeedsCategoryMenuViewDelegate;

@interface VLFeedsCategoryMenuView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <VLFeedsCategoryMenuViewDelegate> _delegate;
    long long _selectedTopMenuIndex;
    long long _selectedSubMenuIndex;
    UICollectionView *_topMenuView;
    UICollectionView *_subMenuView;
    UIView *_midLine;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *midLine; // @synthesize midLine=_midLine;
@property(retain, nonatomic) UICollectionView *subMenuView; // @synthesize subMenuView=_subMenuView;
@property(retain, nonatomic) UICollectionView *topMenuView; // @synthesize topMenuView=_topMenuView;
@property(nonatomic) long long selectedSubMenuIndex; // @synthesize selectedSubMenuIndex=_selectedSubMenuIndex;
@property(nonatomic) long long selectedTopMenuIndex; // @synthesize selectedTopMenuIndex=_selectedTopMenuIndex;
@property(nonatomic) __weak id <VLFeedsCategoryMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)makeConstraints;
- (void)setUpViews;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

