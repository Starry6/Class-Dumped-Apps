@interface EAAccessoryManager : NSObject
@property (nonatomic) NSArray connectedAccessories;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentVehicleInformation:;
- (void)_cameraInfoUpdated:;
- (id)init;
- (void)_handleAccessoryNotificationTimeout:;
- (void)stopDestinationSharingForUUID:;
- (void)_ephemerisURLAvailable:;
- (void)initialEAAccessoriesAttachedAfterClientConnection:;
- (void)handleIncomingExternalAccessoryData:forEASessionIdentifier:withReply:;
- (void)dealloc;
- (void)saveEASession:forEASessionUUID:;
- (void)_applicationDidEnterBackground:;
- (void)setShouldAllowInternalProtocols:;
- (void)_timeSyncInfoUpdated:;
- (void)_applicationWillEnterForeground:;
- (void)setAreLocationAccessoriesEnabled:;
- (void)startDestinationSharingForUUID:options:;
- (void)nmeaSentenceArrived:forAccessoryUUID:;
- (void)pointOfInterestSelection:;
- (void)_integrateSequesteredAccessories;
- (void)stopIPAccessoryDiscovery;
- (void)_OOBBTPairingCompletionStatusReceived:;
- (void)setShouldAllowCppRuntime:;
- (void)_externalAccessoryConnectedNotificationHandler:;
- (void)updateAccessoryInfo:;
- (void)accessibilityAction:;
- (void)openCompleteForSession:connectionID:;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:;
- (void)_vehicleDataUpdated:;
- (id)authCertForLegacyConnectionID:;
- (void)vehicleStatusUpdate:forAccessoryUUID:;
- (void)destinationSharingStatus:forDestinationUUID:supportedParams:forUUID:;
- (void)sendNMEAFilterList:forUUID:;
- (void)EAAccessoryArrived:;
- (BOOL)areLocationAccessoriesEnabled;
- (void)openSessionFromAccessoryToApp:;
- (id)authCertSerialNumberForLegacyConnectionID:;
- (void)closeEASessionForEASessionUUID:;
- (void)_externalAccessoryConnected:;
- (void)accessibilitySystemPropertyChange:;
- (void)_checkForConnectedAccessories:backgroundTaskIdentifier:;
- (void)startLocationForConnectedAccessories;
- (void)_gpsTimeRequested:;
- (void)sendGPRMCDataStatus:ValueV:ValueX:forUUID:;
- (void)registerForLocalNotifications;
- (id)availableAccessories;
- (void)_nmeaFilteringSupportChanged:;
- (id)_initFromSingletonCreationMethod;
- (void)_externalAccessoryDisconnected:;
- (void)accessibilitySystemPropertyRequest:;
- (void)closeInputStreamForEASessionUUID:;
- (id)_connectedAccessories;
- (BOOL)appDeclaresProtocol:;
- (void)sendOutgoingEAData:forSessionUUID:;
- (void)EAAccessoryLeft:;
- (void)_externalAccessoryUpdated:;
- (void)devicePicker:didSelectAddress:errorCode:;
- (void)disconnectIPAccessory:;
- (BOOL)destinationInformation:forAccessoryUUID:;
- (void)wakeAccessoryWithToken:;
- (void)unregisterForLocalNotifications;
- (void)_locationNmeaDataAvailable:;
- (void)_cleanUpForTaskSuspendWithTaskIdentifier:;
- (id)_findExtraAccessoriesContainedOnlyIniAP:;
- (void)requestIAPAccessoryWiFiCredentials:;
- (void)accessibilityContextChange:;
- (id)_findExtraAccessoriesContainedOnlyInEA:;
- (void)openSessionFromAppToAccessory:;
- (void)_externalAccessoryReconnected:;
- (void)resumeEASessionData:;
- (void)stopLocationForConnectedAccessories;
- (void)startIPAccessoryDiscovery;
- (BOOL)shouldAllowCppRuntime;
- (void)accessibilityItemPropertyRequest:;
- (void)_pointOfInterestStatusReceived:;
- (id)connectedAccessories;
- (void)_removeAlliAPAccessoriesFromArray:notifyClients:;
- (void)sendDeviceIdentifierNotification:usbIdentifier:forUUID:;
- (void)_iapServerDied:;
- (BOOL)processIDIsUsingAccessory:;
- (void)initiateConnectionToIPAccessory:;
- (BOOL)shouldAllowInternalProtocols;
- (void)_locationPointDataAvailable:;
- (void)accessoryClosedEASession:;
- (void)createEASessionForProtocol:accessoryUUID:withReply:;
- (void)sendWiredCarPlayAvailable:usbIdentifier:wirelessCarPlayAvailable:bluetoothIdentifier:forUUID:;
- (void)showBluetoothAccessoryPickerWithNameFilter:completion:;
- (void)endSession:forConnectionID:;
+ (void)accessibilityStopListening;
+ (void)accessibilityStartListening;
+ (id)sharedAccessoryManager;
+ (id)accessoryDictionaryForLogging:;
+ (BOOL)isLoggingEnabled;
+ (void)registerCapabilities:;
@end
