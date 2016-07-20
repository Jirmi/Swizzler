/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "RoundedCornerTableViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CellWithSecureTextField, UIBarButtonItem, UITextField, UIViewController;

@interface SecuritySetupViewController : RoundedCornerTableViewController <UITextFieldDelegate, UIAlertViewDelegate>
{
    UITextField *lastFocusItem;
    struct CSecurityManager *securityManager;
    UIBarButtonItem *cancelButton;
    BOOL showCancelButton;
    BOOL _newPwdNotification;
    int _alertViewType;
    id <SecuritySetupViewControllerDelegate> _delegate;
    UIViewController *_previousParentController;
    int from;
    CellWithSecureTextField *_newPasswordCell;
    CellWithSecureTextField *_confirmPasswordCell;
    CellWithSecureTextField *_oldPasswordCell;
}

- (void)setOldPasswordCell:(id)fp8;
- (id)oldPasswordCell;
- (void)setConfirmPasswordCell:(id)fp8;
- (id)confirmPasswordCell;
- (void)setNewPasswordCell:(id)fp8;
- (id)newPasswordCell;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setCancelButton:(id)fp8;
- (id)cancelButton;
- (BOOL)showCancelButton;
- (void)setFrom:(int)fp8;
- (int)from;
- (void)setSecurityManager:(struct CSecurityManager *)fp8;
- (struct CSecurityManager *)securityManager;
- (BOOL)canPerformAction:(SEL)fp8 withSender:(id)fp12;
- (void)dealloc;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (BOOL)textFieldShouldEndEditing:(id)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (void)textFieldDidBeginEditing:(id)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)getCell:(int)fp8 forTable:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)setShowCancelButton:(BOOL)fp8;
- (void)ShowMessage:(id)fp8 withMsg:(id)fp12;
- (void)setNewPassword;
- (void)changeOldPassword;
- (void)buttonPressed:(id)fp8;
- (void)cancel:(id)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithStyle:(int)fp8;
- (id)getDefaultAutomationScreenName;

@end
