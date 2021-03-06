//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSLifecycleViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HsBorderedButton, HsNewConversationTableViewController, NSArray, NSString, UILabel, UITableView, UIView;
@protocol HsFaqSearchUIController><HsSearchIndexUpdateListener, HsTableViewAdapter><HsSearchControllerDelegate><HsModelObserver;

@interface HsSuggestionsViewController : HSLifecycleViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_issueText;
    NSArray *_matchedFaqs;
    HsNewConversationTableViewController *_hsNewConversationVc;
    id <HsTableViewAdapter><HsSearchControllerDelegate><HsModelObserver> _adapter;
    id <HsFaqSearchUIController><HsSearchIndexUpdateListener> _controller;
    UITableView *_tableView;
    UIView *_headerView;
    UILabel *_headerLabel;
    UIView *_footerView;
    HsBorderedButton *_footerViewContactUsButton;
}

@property(nonatomic) __weak HsBorderedButton *footerViewContactUsButton; // @synthesize footerViewContactUsButton=_footerViewContactUsButton;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <HsFaqSearchUIController><HsSearchIndexUpdateListener> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) id <HsTableViewAdapter><HsSearchControllerDelegate><HsModelObserver> adapter; // @synthesize adapter=_adapter;
@property(nonatomic) __weak HsNewConversationTableViewController *hsNewConversationVc; // @synthesize hsNewConversationVc=_hsNewConversationVc;
@property(retain, nonatomic) NSArray *matchedFaqs; // @synthesize matchedFaqs=_matchedFaqs;
@property(retain, nonatomic) NSString *issueText; // @synthesize issueText=_issueText;
- (void).cxx_destruct;
- (void)continueSendingMessageTapped:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)initFooterView;
- (void)initHeaderView;
- (void)reapplyTheming;
- (void)initialiseUI;
- (void)applyTheming;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

