//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "DbStorageProtocol.h"
#import "GTServiceDiscoveryDataPersistenceDelegate.h"
#import "GTSocketCommunicationDelegate.h"
#import "UIAccelerometerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIApplicationDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class AppStoreSingleViewDelegate, ContactDrawerViewController, EmailRootNC, GFECalendarViewController, GMMTasksRootVC, GTStarWarsViewController, GUTabBarController, GmmAppCore, GmmDefaults, GmmLogSender, GmmSplitViewManager, GmmStatusWatcher, GmmUIFreezeDetector, GoodBAIViewController, KLDayViewController, KLMonthViewController, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSTimer, NSURL, PreferencesMenuTVC, ReSyncManager, SBMainViewControllerBase, StartupVC, UIActionSheet, UIAlertView, UINavigationController, UIViewController, UIWindow;

@interface gmmAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate, UIAlertViewDelegate, DbStorageProtocol, UIAccelerometerDelegate, GTSocketCommunicationDelegate, GTServiceDiscoveryDataPersistenceDelegate, UINavigationControllerDelegate, UIActionSheetDelegate>
{
    UIWindow *window;
    UIWindow *wipeWindow;
    UIViewController *wipeViewController;
    UIViewController *_coverVC;
    UIViewController *_backdropVC;
    GTStarWarsViewController *_decryptingStarWarsVC;
    UIAlertView *_reprovAlert;
    UIAlertView *_sendlogAlert;
    UIAlertView *_contactSyncDisabledOnWakeupAlert;
    UIAlertView *_sendSaveAlertView;
    GmmAppCore *_appCore;
    GmmStatusWatcher *statusWatcher;
    PreferencesMenuTVC *_prefsTVC;
    GUTabBarController *rootTabBarVC;
    BOOL _reprovision;
    BOOL _appHasLoaded;
    BOOL _encryptionPending;
    BOOL _delayedDidBecomeActive;
    BOOL _showInitialLockScreen;
    BOOL _showComplianceManagerScreen;
    GmmSplitViewManager *iPadSplitViewManager;
    ReSyncManager *_reSyncManager;
    BOOL _waitingOnSyncEngine;
    BOOL _secruityAlreadyChecked;
    NSArray *_numbers;
    GmmLogSender *_sender;
    BOOL _radioSuspended;
    BOOL _initialEmailSyncCompleted;
    BOOL _viewsAreSetUp;
    int _secondsFromGMT;
    BOOL _uiHasBeenPreparedToBackground;
    BOOL _userInitiatedCACSetup;
    NSMutableDictionary *_mainViewControllers;
    EmailRootNC *_emaiRootNC;
    SBMainViewControllerBase *_sbMainViewController;
    ContactDrawerViewController *_contactDrawerViewController;
    NSMutableArray *_pendingURLArrayObjects;
    int _appTransitionState;
    AppStoreSingleViewDelegate *_appStoreDelegate;
    GoodBAIViewController *_baiViewController;
    UINavigationController *baiNavController;
    NSMutableSet *debugOptions;
    GmmDefaults *secureUserDefaults;
    BOOL _cutMoreNC;
    NSOperationQueue *_asyncOperationQueue;
    NSTimer *_deviceNotActiveTimer;
    NSURL *_savedFileUrl;
    NSString *_savedSourceApplication;
    id _savedAnnotation;
    NSString *_streamingFilePath;
    NSMutableDictionary *_fileNameObfuscatedMap;
    NSMutableDictionary *_fileNameObfuscatedMaps;
    BOOL _isChangePasswordNeeded;
    NSURL *_fileUrl;
    BOOL _forceTabBarUserInteractionDisable;
    BOOL _moreNCInTransition;
    StartupVC *_startupVC;
    NSMutableArray *_stackOfVisibleLocalNotificationsRecordNumber;
    KLDayViewController *_calDayVC;
    KLMonthViewController *_calMonthVC;
    int _calViewMode;
    BOOL _calViewModeHasChanged;
    int _desiredLockOutVCOrientation;
    BOOL _complianceCheckFailedAlertDisplayed;
    GmmUIFreezeDetector *_freezeDetector;
    BOOL _isTourScreenRead;
    BOOL isGVAuthenticationPending;
    BOOL _getMoreMenuDisabled;
    UIViewController *lastModalAnimation;
    UIActionSheet *conferenceActionSheet;
    NSMutableDictionary *spellCorrectionDictionariesBackup;
    UIViewController *rootVC;
    GMMTasksRootVC *tasksRootVC;
    GFECalendarViewController *_calendarViewController;
    EmailRootNC *_emailRootNC;
    AppStoreSingleViewDelegate *_appStoreDelegete;
}

+ (id)topMostViewModalControllerForViewController:(id)arg1;
+ (id)instance;
@property(nonatomic) BOOL complianceCheckFailedAlertDisplayed; // @synthesize complianceCheckFailedAlertDisplayed=_complianceCheckFailedAlertDisplayed;
@property(nonatomic) BOOL getMoreMenuDisabled; // @synthesize getMoreMenuDisabled=_getMoreMenuDisabled;
@property(retain, nonatomic) SBMainViewControllerBase *sbMainViewController; // @synthesize sbMainViewController=_sbMainViewController;
@property(nonatomic) int desiredLockOutVCOrientation; // @synthesize desiredLockOutVCOrientation=_desiredLockOutVCOrientation;
@property(nonatomic) BOOL isGVAuthenticationPending; // @synthesize isGVAuthenticationPending;
@property(retain, nonatomic) NSURL *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(nonatomic) BOOL isTourScreenRead; // @synthesize isTourScreenRead=_isTourScreenRead;
@property(retain, nonatomic) StartupVC *startupVC; // @synthesize startupVC=_startupVC;
@property(retain) UIWindow *wipeWindow; // @synthesize wipeWindow;
@property(retain) UIViewController *wipeViewController; // @synthesize wipeViewController;
@property(retain, nonatomic) UIAlertView *sendSaveAlertView; // @synthesize sendSaveAlertView=_sendSaveAlertView;
@property(retain, nonatomic) NSMutableDictionary *fileNameObfuscatedMaps; // @synthesize fileNameObfuscatedMaps=_fileNameObfuscatedMaps;
@property(retain, nonatomic) NSMutableDictionary *fileNameObfuscatedMap; // @synthesize fileNameObfuscatedMap=_fileNameObfuscatedMap;
@property(retain, nonatomic) id savedAnnotation; // @synthesize savedAnnotation=_savedAnnotation;
@property(retain, nonatomic) NSString *savedSourceApplication; // @synthesize savedSourceApplication=_savedSourceApplication;
@property(retain, nonatomic) NSURL *savedFileUrl; // @synthesize savedFileUrl=_savedFileUrl;
@property(readonly) BOOL hasUIBeenPreparedForBackground; // @synthesize hasUIBeenPreparedForBackground=_uiHasBeenPreparedToBackground;
@property BOOL initialEmailSyncCompleted; // @synthesize initialEmailSyncCompleted=_initialEmailSyncCompleted;
@property(nonatomic, getter=appTransitionState) int appTransitionState; // @synthesize appTransitionState=_appTransitionState;
@property BOOL radioSuspended; // @synthesize radioSuspended=_radioSuspended;
@property(retain, nonatomic) AppStoreSingleViewDelegate *appStoreDelegate; // @synthesize appStoreDelegate=_appStoreDelegete;
@property(retain, nonatomic) NSMutableDictionary *mainViewControllers; // @synthesize mainViewControllers=_mainViewControllers;
@property(readonly, nonatomic) EmailRootNC *emailRootNC; // @synthesize emailRootNC=_emailRootNC;
@property(retain, nonatomic) GFECalendarViewController *calendarViewController; // @synthesize calendarViewController=_calendarViewController;
@property(retain, nonatomic) GMMTasksRootVC *tasksRootVC; // @synthesize tasksRootVC;
@property(retain, nonatomic) UINavigationController *baiNavController; // @synthesize baiNavController;
@property(retain, nonatomic) GoodBAIViewController *baiViewController; // @synthesize baiViewController=_baiViewController;
@property(retain, nonatomic) ContactDrawerViewController *contactDrawerViewController; // @synthesize contactDrawerViewController=_contactDrawerViewController;
@property(retain, nonatomic) GmmSplitViewManager *iPadSplitViewManager; // @synthesize iPadSplitViewManager;
@property(retain, nonatomic) GmmLogSender *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSArray *numbers; // @synthesize numbers=_numbers;
@property(nonatomic) BOOL forceTabBarUserInteractionDisable; // @synthesize forceTabBarUserInteractionDisable=_forceTabBarUserInteractionDisable;
@property(nonatomic) BOOL userInitiatedCACSetup; // @synthesize userInitiatedCACSetup=_userInitiatedCACSetup;
@property(nonatomic) BOOL showInitialLockScreen; // @synthesize showInitialLockScreen=_showInitialLockScreen;
@property(retain, nonatomic) PreferencesMenuTVC *prefsTVC; // @synthesize prefsTVC=_prefsTVC;
@property(retain, nonatomic) GmmAppCore *appCore; // @synthesize appCore=_appCore;
@property(retain, nonatomic) GmmStatusWatcher *statusWatcher; // @synthesize statusWatcher;
@property(retain, nonatomic) GUTabBarController *rootTabBarVC; // @synthesize rootTabBarVC;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
@property UIViewController *rootVC; // @synthesize rootVC;
@property BOOL showComplianceManagerScreen; // @synthesize showComplianceManagerScreen=_showComplianceManagerScreen;
@property(retain, nonatomic) NSMutableDictionary *spellCorrectionDictionariesBackup; // @synthesize spellCorrectionDictionariesBackup;
@property(retain, nonatomic) UIActionSheet *conferenceActionSheet; // @synthesize conferenceActionSheet;
@property(retain, nonatomic) UIViewController *lastModalAnimation; // @synthesize lastModalAnimation;
- (void)stopUIFreezeDetection;
- (void)startUIFreezeDetection;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setupGetMoreEmailTableCell:(id)arg1;
- (void)getMoreEmail;
- (void)checkForGetMoreMenuAvailability;
- (BOOL)isGetMoreMenuAvailable:(BOOL)arg1;
- (void)dismissUIBlockingScreenForAging;
- (void)presentUIBlockingScreenForAging;
- (void)disconnectGMAConnections;
- (void)setupAppStoreView;
- (void)setCalendarView:(int)arg1;
- (void)updateTabOrder;
- (void)addTab:(id)arg1;
- (void)removeTab:(id)arg1;
- (void)setCurrentTab:(id)arg1;
- (void)dismissAllModalsAnimated:(BOOL)arg1;
@property(nonatomic) BOOL isChangePasswordNeeded;
- (void)deviceDidLock;
- (void)stopListeningForAccelerometerUpdates;
- (void)accelerometer:(id)arg1 didAccelerate:(id)arg2;
- (BOOL)canLeaveCurrentTab;
- (void)EditAsDraftMail:(unsigned short)arg1 errCode:(unsigned int)arg2;
- (void)presentiPadModalViewController:(id)arg1;
- (id)getStartupVCNibName;
- (void)clearDocumentsInbox;
- (void)clearTmps;
- (void)showFipsFailedScreen;
- (void)dismissComplianceManagerScreenAnimated:(BOOL)arg1;
- (void)dismissComplianceManagerScreen;
- (void)onDeviceDisabled;
- (id)showFullScreenMessage:(id)arg1 withDismiss:(BOOL)arg2;
- (void)showStartupScreen:(BOOL)arg1;
- (void)sendLogsQuietly;
- (void)startSendLog;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)presentDraftEmail;
- (void)presentDraftEmailAfterTourRead;
- (void)resumeAppState;
- (void)loadState;
- (void)saveState;
- (void)showBrowserAndLoadUrl:(id)arg1;
- (void)dismissBrowserModal:(id)arg1;
- (void)loadUrlInBrowser:(id)arg1;
- (void)displayBrowserDeniedAlert;
- (void)ensureBAIVCCreated;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)makeTabBarHidden:(id)arg1 hide:(BOOL)arg2;
- (void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (void)showResyncScreen;
- (void)postInstall;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)clearClipBoardCheck:(const char *)arg1;
- (id)secureUserDefaults;
- (void)prepareForBackgroundSuspendOrTermination;
- (void)setupViewsiPad;
- (id)tabBarViewControllers;
- (id)sortedTabKeyArray;
- (id)enabledKeyArray;
- (id)tabBarControllerForKey:(id)arg1;
- (void)setMainViewController:(id)arg1 withKey:(id)arg2;
- (void)setupViews;
- (void)repeatGetGDGK;
- (void)repeatPushGDGK;
- (void)runGDGKCheck;
- (void)createUDIDMACAddrInDB;
- (void)wipeAppTooOldToUpgrade;
- (void)createWipeWindow;
- (BOOL)isDeviceSupportMultitabs;
- (void)checkGmmSyncEngine;
- (void)initializeSyncEngine;
- (void)checkPendingActions;
- (void)didUnlockGmm;
- (void)checkForResync;
- (BOOL)appNeedsToReprovision;
- (void)showSendLogPromotMessage;
- (void)removeClearCacheDirectory;
- (void)registerGTServices;
- (id)persistedData;
- (void)dataToPersist:(id)arg1;
- (void)doAppStartup;
- (void)initializeMocana;
- (void)startApp;
- (void)handleReminderPayload:(id)arg1;
- (BOOL)handleReminderURL:(id)arg1 controller:(id)arg2;
- (BOOL)launchEmail:(id)arg1 controller:(id)arg2;
- (void)extractComponentsFromString:(id)arg1 intoWrapper:(id)arg2;
- (void)discardOrphanAttachments:(id)arg1;
- (void)runSaveSendCommand:(int)arg1;
- (id)createAndMapObfuscatedFilePathFromFileName:(id)arg1;
- (id)createAndMapObfuscatedFilePathFromURL:(id)arg1;
- (BOOL)saveOrSendDetect:(int)arg1 withURL:(id)arg2;
- (BOOL)saveOrSendDetectWithURL:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationSignificantTimeChange:(id)arg1;
- (void)updateTabBarCalendarIcon;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (BOOL)isForLaunchFromBrowser:(id)arg1 sourceApplication:(id)arg2;
- (BOOL)isForInternalUseUrl:(id)arg1 sourceApplication:(id)arg2;
- (void)setConfuscatedFileSize:(unsigned int)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)isEasyActivationURLOnDelayedUrlList;
- (BOOL)isContainerCommunicationV2Url:(id)arg1 withCommand:(id)arg2;
- (void)handleContainerCommunicationV2:(id)arg1 application:(id)arg2;
- (void)showRootTabVCForCompliance:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)openURL_DelayRequiredForURL:(id)arg1;
- (BOOL)openURL_Denied:(id)arg1;
- (void)sendFileViaEmailAttachment;
- (void)removeFileFromCancel;
- (void)saveFileToGoodFileRepository:(id)arg1;
- (void)streamEndedWithError:(id)arg1;
- (void)handleDelayedURL;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)iPadDictationAttempt:(id)arg1;
- (BOOL)application:(id)arg1 shouldAllowExtensionPointIdentifier:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (void)resignAction:(BOOL)arg1;
@property(readonly, nonatomic) BOOL dictationInProgress;
- (void)postUDIDCheckLaunchWithOptions:(id)arg1;
- (void)removeDismissViewListeners;
- (void)addDismissViewListeners;
- (void)didDismissHighPriorityView:(id)arg1;
- (void)addDidDismissHighPriorityViewObserver;
- (void)dismissLowPriorityViews:(id)arg1;
- (BOOL)isResyncing;
- (void)presentFolderNotification:(id)arg1;
- (void)prepareUIToForeground;
- (void)prepareUIToBackground;
- (void)showAlertLowDiskSpace;
- (void)alertContactSyncDisablingAsNoValidSource;
- (void)resumeOTA;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)isOldGFEPresentFor:(id)arg1 registeredApplications:(id)arg2;
- (BOOL)isOldGFEPresent;
- (BOOL)isAnotherCopyOfGFEPresent:(id)arg1 registeredApplications:(id)arg2;
- (BOOL)isAnotherCopyOfGFEPresent;
- (void)scheduleNewContactSync:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)restoreSpellCorrectionDictionaries;
- (void)saveCurrentStateOfSpellCorrectionDictionaries;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)dismissSaveSendAlert;
- (id)asyncOperationQueue;
- (void)suspendRadioAsync:(BOOL)arg1;
- (void)suspendRadio:(BOOL)arg1;
- (void)delayedSuspendRadio;
- (void)wakeRadioAfterSuspension;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)recoverOutboxSendingQueue;
- (BOOL)shouldAllowURLBeforeInit:(id)arg1;
- (BOOL)isWipeAcknowledgementPending;
- (id)debugOptions;

@end

