//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

@class NSArray;

@interface MasterVC : UITableViewController
{
    id _delegate;
    int _selectedItemId;
    NSArray *_items;
}

@property(nonatomic) int selectedItemId; // @synthesize selectedItemId=_selectedItemId;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) id <MasterVCDelegate> delegate; // @synthesize delegate=_delegate;
- (id)enabledItems;
- (id)prepareIndex;
- (void)setSelectionAnimated:(BOOL)arg1;
- (void)dismissSecurityNC:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)needReloadView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

