@interface SFDeviceOperationHomeKitSetup : NSObject
@property (nonatomic) NSDictionary appDataSelf;
@property (nonatomic) HMAccessory tvAudioInput;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) BOOL userInteractive;
@property (nonatomic) BOOL hasHomePod;
@property (nonatomic) BOOL hasMultipleUsers;
@property (nonatomic) BOOL homeKitAddedAccessory;
@property (nonatomic) HMHomeManager homeKitHomeManager;
@property (nonatomic) BOOL homeKitHomeManagerReady;
@property (nonatomic) HMHome homeKitSelectedHome;
@property (nonatomic) NSString homeKitSelectedRoomName;
@property (nonatomic) NSString iTunesAccountID;
@property (nonatomic) ACAccount iTunesAccount;
@property (nonatomic) BOOL keyExchangeOnly;
@property (nonatomic) double metricNonUserSeconds;
@property (nonatomic) double metricUserSeconds;
@property (nonatomic) BOOL pauseAfterUserInput;
@property (nonatomic) @? pauseHandler;
@property (nonatomic) BOOL personalRequestsEnabled;
@property (nonatomic) @? promptForHomeHandler;
@property (nonatomic) @? promptForRoomHandler;
@property (nonatomic) @? promptForRoomHandlerDetailed;
@property (nonatomic) @? promptToInstallHomeAppHandler;
@property (nonatomic) HMAccessory stereoCounterpart;
@property (nonatomic) NSInteger stereoRole;
@property (nonatomic) TRSession trSession;
@property (nonatomic) double timeoutInSeconds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_cleanup;
- (id)init;
- (void)_run;
- (BOOL)userInteractive;
- (BOOL)_isOwnerOfHome:;
- (void)homeManagerDidUpdateHomes:;
- (id)iTunesAccount;
- (id)dispatchQueue;
- (void)setCompletionHandler:;
- (void)setDispatchQueue:;
- (double)timeoutInSeconds;
- (void)homeManager:didUpdateStatus:;
- (void)resume;
- (void)homeManagerDidUpdateDataSyncState:;
- (void).cxx_destruct;
- (void)_completeWithError:;
- (void)setITunesAccount:;
- (void)invalidate;
- (void)activate;
- (id)completionHandler;
- (BOOL)personalRequestsEnabled;
- (void)setPersonalRequestsEnabled:;
- (void)accessoryBrowser:didRemoveNewAccessory:;
- (void)accessoryBrowser:didFindNewAccessory:;
- (id)_normalizedString:;
- (void)homeAppInstallChoice:;
- (id)homeKitAccessory;
- (void)selectHome:;
- (void)reselectHome;
- (void)selectRoom:;
- (void)_startTimeout:;
- (void)_runInit;
- (void)_runHomeKitDeviceSetup;
- (id)_runHomeKitAutoSelectHome:;
- (void)_runHomeKitAddHome;
- (void)_runHomeKitSelectRoom;
- (void)_runHomeKitAddAccessory;
- (void)_runHomeKitSetupRoom;
- (void)_runHomeKitAssignRoom;
- (void)_runHomeKitAddAppData;
- (BOOL)_runHomeKitConfigureStereoPairAndReturnError:;
- (void)_runHomeKitUpdateAppleTVAudioDestination;
- (id)_homeKitFindSettingsWithKeyPath:group:;
- (void)_runUpdateUserListeningHistoryStart;
- (void)_runPersonalRequestsStart;
- (id)findStereoCounterpartsWithSupportedVersions:;
- (id)findTVs;
- (id)_mediaSystemForAccessory:;
- (void)_removeSimilarRoomNames:home:;
- (void)_restoreHomeApp;
- (void)_updateHomeStats;
- (void)_updateAccount;
- (id)appDataSelf;
- (void)setAppDataSelf:;
- (id)tvAudioInput;
- (void)setTvAudioInput:;
- (void)setUserInteractive:;
- (BOOL)hasHomePod;
- (BOOL)hasMultipleUsers;
- (BOOL)homeKitAddedAccessory;
- (id)homeKitHomeManager;
- (BOOL)homeKitHomeManagerReady;
- (id)homeKitSelectedHome;
- (id)homeKitSelectedRoomName;
- (id)iTunesAccountID;
- (void)setITunesAccountID:;
- (BOOL)keyExchangeOnly;
- (void)setKeyExchangeOnly:;
- (double)metricNonUserSeconds;
- (double)metricUserSeconds;
- (BOOL)pauseAfterUserInput;
- (void)setPauseAfterUserInput:;
- (id)pauseHandler;
- (void)setPauseHandler:;
- (id)promptForHomeHandler;
- (void)setPromptForHomeHandler:;
- (id)promptForRoomHandler;
- (void)setPromptForRoomHandler:;
- (id)promptForRoomHandlerDetailed;
- (void)setPromptForRoomHandlerDetailed:;
- (id)promptToInstallHomeAppHandler;
- (void)setPromptToInstallHomeAppHandler:;
- (id)stereoCounterpart;
- (void)setStereoCounterpart:;
- (int)stereoRole;
- (void)setStereoRole:;
- (id)trSession;
- (void)setTrSession:;
- (void)setTimeoutInSeconds:;
@end
