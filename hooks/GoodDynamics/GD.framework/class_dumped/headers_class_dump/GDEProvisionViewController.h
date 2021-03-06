//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDViewController.h"

#import "PinTextDidChangedNotification.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITextFieldDelegate.h"

@class GDEasyActivationTableView, GDEasyActivationTableViewCell, GDPinView, GDUITextField, NSString, UIButton, UILabel, UITextField;

@interface GDEProvisionViewController : GDViewController <UITextFieldDelegate, UIAlertViewDelegate, UITableViewDataSource, PinTextDidChangedNotification>
{
    BOOL isKeyBoardDisp;
    BOOL isResetPassword;
    BOOL _enableBackToEA;
    GDUITextField *emailField;
    UILabel *titleTextLabel;
    UILabel *messageTextLabel;
    GDPinView *pinView;
    GDEasyActivationTableView *tableViewEA;
    GDEasyActivationTableViewCell *pinFieldCell;
    GDEasyActivationTableViewCell *emailFieldCell;
    UITextField *_internal_firstResponder;
    UIButton *_backButton;
    UIButton *_okButton;
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UITextField *internal_firstResponder; // @synthesize internal_firstResponder=_internal_firstResponder;
@property(nonatomic) BOOL enableBackToEA; // @synthesize enableBackToEA=_enableBackToEA;
@property(nonatomic) BOOL isResetPassword; // @synthesize isResetPassword;
@property(nonatomic) BOOL isKeyBoardDisp; // @synthesize isKeyBoardDisp;
@property(retain, nonatomic) GDEasyActivationTableViewCell *emailFieldCell; // @synthesize emailFieldCell;
@property(retain, nonatomic) GDEasyActivationTableViewCell *pinFieldCell; // @synthesize pinFieldCell;
@property(retain, nonatomic) GDEasyActivationTableView *tableViewEA; // @synthesize tableViewEA;
@property(retain, nonatomic) GDPinView *pinView; // @synthesize pinView;
@property(retain, nonatomic) UILabel *messageTextLabel; // @synthesize messageTextLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel;
@property(retain, nonatomic) GDUITextField *emailField; // @synthesize emailField;
- (void)clearSensitiveData;
- (BOOL)shouldClearSensitiveData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustButtonsUnderFrame:(struct CGRect)arg1;
- (void)updateUIToOrientation:(int)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)keyboardAnimationDurationForNotification:(id)arg1;
- (void)startAnimation:(double)arg1;
- (float)horizontalScreenContentMargin;
- (float)heightOffsetForRemoteLock;
- (float)heightOffsetForResetPassword;
- (float)getDefaultOffset;
- (float)heightOffsetForTableView;
- (void)adjustLabels:(float)arg1;
- (void)setTablePosition;
- (BOOL)isiPad;
- (void)loadViewForAll;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)loadViewForiPhone;
- (void)loadViewForiPad;
- (void)updateOKButtonState;
- (void)pinViewTextDidChaged;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)provisionPinDidEntered;
- (void)cancelButtonWasClicked;
- (void)bottomInfoButtonAction;
- (void)onUnlockKeyArrives;
- (void)initInputUIData;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)checkAllFieldsEntered;
- (unsigned int)minimumPastedStringLengthForParsing;
- (BOOL)parsePastedString:(id)arg1 forEmail:(id *)arg2 andKey1:(id *)arg3 andKey2:(id *)arg4 andKey3:(id *)arg5;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

