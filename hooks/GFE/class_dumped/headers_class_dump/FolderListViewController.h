//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

#import "FolderListViewDataDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FolderListViewData, FolderViewData, NSMutableArray, UIPopoverController;

@interface FolderListViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, FolderListViewDataDelegate>
{
    FolderViewData *_data;
    FolderListViewData *m_folderListViewData;
    int _viewType;
    BOOL _cancelButtonEnabled;
    NSMutableArray *_moveArray;
    id <FolderListViewControllerDelegate> _delegate;
    int _ignoreFolderType;
    UIPopoverController *_popover;
}

@property(nonatomic) UIPopoverController *popover; // @synthesize popover=_popover;
@property(nonatomic) int ignoreFolderType; // @synthesize ignoreFolderType=_ignoreFolderType;
@property(retain, nonatomic) FolderListViewData *folderListViewData; // @synthesize folderListViewData=m_folderListViewData;
@property(nonatomic) id <FolderListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *moveArray; // @synthesize moveArray=_moveArray;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) FolderViewData *data; // @synthesize data=_data;
- (oneway void)release;
- (id)retain;
- (id)getImageName:(unsigned int)arg1;
- (void)complete;
- (void)folderListViewData:(id)arg1 didUpdateManifest:(BOOL)arg2;
- (void)expandOrCollapseFolder:(id)arg1 event:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)folderSyncIsToggleableForFolder:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setCancelButtonEnabled:(BOOL)arg1;
- (void)refreshPopoverSize;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)setupBars;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (id)getDefaultAutomationScreenName;

@end
