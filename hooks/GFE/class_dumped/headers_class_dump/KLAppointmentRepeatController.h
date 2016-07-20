//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUFontSizeAwareViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIPickerViewDelegate.h"

@class AppointmentWrapper, UIPickerView;

@interface KLAppointmentRepeatController : GUFontSizeAwareViewController <UIActionSheetDelegate, UIPickerViewDelegate>
{
    AppointmentWrapper *appWrapper;
    AppointmentWrapper *appWrapperTmp;
    AppointmentWrapper *appWrapperTmpLoc;
    UIPickerView *myPickerViewDaily;
    UIPickerView *myPickerViewWeekly;
    UIPickerView *myPickerViewMonthly;
    BOOL noFooter;
    BOOL validate;
}

@property(nonatomic) BOOL validate; // @synthesize validate;
@property(nonatomic) BOOL noFooter; // @synthesize noFooter;
@property(retain, nonatomic) UIPickerView *myPickerViewMonthly; // @synthesize myPickerViewMonthly;
@property(retain, nonatomic) UIPickerView *myPickerViewWeekly; // @synthesize myPickerViewWeekly;
@property(retain, nonatomic) UIPickerView *myPickerViewDaily; // @synthesize myPickerViewDaily;
@property(retain, nonatomic) AppointmentWrapper *appWrapperTmpLoc; // @synthesize appWrapperTmpLoc;
@property(retain, nonatomic) AppointmentWrapper *appWrapperTmp; // @synthesize appWrapperTmp;
@property(retain, nonatomic) AppointmentWrapper *appWrapper; // @synthesize appWrapper;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)createPickerMonthly;
- (void)createPickerWeekly;
- (void)createPickerDaily;
- (void)dealloc;
- (id)init;

@end
