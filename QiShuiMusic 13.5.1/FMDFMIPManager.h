@interface FMDFMIPManager : NSObject
@property (nonatomic) NSURL managedLostModeFileURL;
@property (nonatomic) NSURL needsLocateAckLostModeFileURL;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)_updateNeedsLocateAckLostModeWithInfo:completion:;
- (void)playSoundWithOptions:completion:;
- (id)newErrorForCode:message:;
- (BOOL)isManagedLostModeActive;
- (id)init;
- (id)lostModeInfo;
- (BOOL)needsLostModeExitAuth;
- (void)_updateManagedLostModeWithInfo:completion:;
- (void)startLocationMonitoringWithOptions:completion:;
- (BOOL)lockdownShouldDisableDeviceRestore;
- (void)clearOfflineFindingInfoWithCompletion:;
- (void)disableBiometricIDForLostModeWithCompletion:;
- (BOOL)lostModeIsActive;
- (void)setPhoneNumber:toAccessoryWithDiscoveryId:completion:;
- (void)stopSoundMessageWithCompletion:;
- (void)setLowBatteryLocateEnabled:withCompletion:;
- (void)getAccessoriesWithCompletion:;
- (void)disableFMIPUsingToken:inContext:completion:;
- (void)initiateLostModeExitAuthForIDSDeviceID:withCompletion:;
- (void)disableManagedLostModeWithLocatedMessage:completion:;
- (void)startLocationMonitoring:;
- (void)_stopAlarm;
- (void)updatePairingLockInfo:completion:;
- (void)signatureHeadersWithData:completion:;
- (void)activationLockVersionWithCompletion:;
- (void)startLocationMonitoringWithContext:completion:;
- (void)fmipAccountWithCompletion:;
- (void)playSoundWithMessage:completion:;
- (id)serialQueue;
- (void)isActivationLockEnabledWithCompletion:;
- (unsigned long long)_managedLostModeType;
- (id)fmipAccount;
- (void)setNeedsLocateAckLostModeFileURL:;
- (id)disableFMIPUsingToken:inContext:;
- (void)_initiateLostModeExitAuthForIDSDeviceID:withCompletion:;
- (void)fmipStateWithCompletion:;
- (void)userNotifiedOfActivationLockForPairedDevices:;
- (void)fetchAPNSTokenWithCompletion:;
- (BOOL)_quickFetchFMIPEnabledstate;
- (void)_getAccessoriesWithFilter:completion:;
- (void)removeAccessoryWithDiscoveryId:completion:;
- (void)clearMaskedAppleIDWithCompletion:;
- (void)stopLocationMonitoringWithOptions:completion:;
- (void)disableFMIPUsingToken:forPairedDeviceWithUDID:withCompletion:;
- (void)activationLockInfoFromDeviceWithCompletion:;
- (void)userNotifiedOfActivationLockForAllPairedDevices;
- (void)didReceiveLostModeExitAuthToken:;
- (void)stopLocationMonitoring:;
- (void)setDailyLocateReportEnabled:;
- (id)_postWipePrefPath;
- (void)_forceFMWUpgradeAlertWithCompletion:;
- (void)waitForRoutableAccessory:timeout:completion:;
- (BOOL)lockdownShouldDisableDevicePairing;
- (void)_disableFMIPUsingToken:inContext:completion:;
- (id)getManagedLostModeFileURL;
- (void)addNotificationRequest:completion:;
- (void)disableFMIPForAccount:pairedDeviceWithUDID:withCompletion:;
- (void)showDailyLocateReport;
- (BOOL)_isRunningAsMobileUser;
- (void)stopLocationMonitoringWithContext:completion:;
- (void)clearData:completion:;
- (id)enableFMIPInContext:;
- (void)markPairedDeviceWithUDID:asMissingUsingToken:withCompletion:;
- (void).cxx_destruct;
- (void)isActivationLockAllowedWithCompletion:;
- (void)stopPlayingSoundForAccessory:rampDownDuration:completion:;
- (void)setManagedLostModeFileURL:;
- (void)activationLockAuthInfoWithCompletion:;
- (void)pairingCheckWith:completion:;
- (void)activationLockInfoWithCompletion:;
- (void)updatedConfigReceived:completion:;
- (void)isActivationLockedWithCompletion:;
- (void)storeOfflineFindingInfo:completion:;
- (void)enableActivationLockWithCompletion:;
- (void)soundStoppedForAccessoryIdentifier:;
- (void)deviceActivationDidSucceed;
- (void)getConnectedAccessoriesDiscoveryIds:;
- (void)markAsMissingSupportedForPairedDeviceWithUDID:withCompletion:;
- (id)needsLocateAckLostModeFileURL;
- (BOOL)_checkLostModeInSharedContainer;
- (void)disableLostMode;
- (void)startPlayingSoundForAccessory:duration:rampUpDuration:channels:completion:;
- (id)pathsToPreserveAcrossWipe;
- (void)userDidAckManagedLostModeLocateWithCompletion:;
- (void)enableManagedLostModeWithInfo:completion:;
- (void)setSerialQueue:;
- (void)didChangeFMIPAccountInfo:;
- (id)managedLostModeFileURL;
- (BOOL)isLostModeActive;
- (void)audioAccessorySerialNumbersWithCompletion:;
- (void)fetchOfflineFindingInfoWithCompletion:;
- (unsigned long long)_needsAckLostModeType;
- (void)fetchAccessoryConfigurations:;
- (void)updateMaskedAppleIDWith:completion:;
- (void)registerDeviceForPairingLock:completion:;
- (id)enableLostModeWithInfo:;
- (id)getNeedsLocateAckLostModeFileURL;
- (void)initiateLostModeExitAuthWithCompletion:;
- (void)lowBatteryLocateEnabledWithCompletion:;
- (void)removeNotificationWithIdentifier:completion:;
+ (id)sharedInstance;
@end
