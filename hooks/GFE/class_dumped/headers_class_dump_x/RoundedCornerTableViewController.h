/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UITableView;

@interface RoundedCornerTableViewController : _ABAddressBookAddRecord
{
    UITableView *_mainTableView;
}

- (void)enumerateRecursivelySubviewsOfView:(id)fp8 withBlock:(id)fp(null);
- (void)setupLayersForCell:(id)fp8 indexPath:(id)fp12;
- (void)setupLayersForCell:(id)fp8;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)viewWillLayoutSubviews;
- (id)tableView;
- (void)viewDidLoad;

@end
