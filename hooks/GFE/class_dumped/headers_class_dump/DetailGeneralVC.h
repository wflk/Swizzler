//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RoundedCornerTableViewController.h"

@class NSMutableArray;

@interface DetailGeneralVC : RoundedCornerTableViewController
{
    struct CSecurityManager *securityManager;
    BOOL isGoodUser;
    NSMutableArray *_sectionArray;
}

@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(nonatomic) struct CSecurityManager *securityManager; // @synthesize securityManager;
- (void)refreshPasswordSection;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)sectionAtIndex:(int)arg1;
- (void)setupSectionArray;
- (int)ShiftSectionsForUnusedPasswordSection:(int)arg1;
- (void)needReloadView:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

@end

