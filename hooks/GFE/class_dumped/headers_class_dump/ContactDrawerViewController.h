//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GTDrawerViewController.h"

@class AddressBookAccessor, ContactSubfolderTVC, ContactViewController, NSMutableDictionary, UIButton;

@interface ContactDrawerViewController : GTDrawerViewController
{
    AddressBookAccessor *addressBookAccessor;
    ContactViewController *_contactVC;
    ContactSubfolderTVC *_drawerTVC;
    NSMutableDictionary *_subFoldersIDs;
    struct UIAListener *_featureSetListener;
    BOOL hasSubfolders;
    UIButton *gripperButton;
}

+ (id)gripperButton;
+ (id)drawerViewControllerAsEmailPicker:(id)arg1;
+ (id)drawerViewController;
+ (float)getDrawerWidth:(int)arg1;
@property(nonatomic) ContactViewController *contactVC; // @synthesize contactVC=_contactVC;
@property(nonatomic) BOOL hasSubfolders; // @synthesize hasSubfolders;
@property(retain, nonatomic) UIButton *gripperButton; // @synthesize gripperButton;
@property(retain, nonatomic) AddressBookAccessor *addressBookAccessor;
- (void)dealloc;
- (id)initWithDrawer:(id)arg1 top:(id)arg2 gripper:(id)arg3 openWidth:(float)arg4;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)addListener;
- (void)removeListener;
- (void)optionsDbNotificationReceived:(id)arg1;
- (void)updatedSubfolderCount:(int)arg1;
- (void)selectedFolder:(unsigned long)arg1;
- (void)addNewContact;

@end
