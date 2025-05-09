@interface IMFMFSession : NSObject
@property (nonatomic) FMFDevice activeDevice;
@property (nonatomic) FMFSession session;
@property (nonatomic) NSString establishingAccountID;
@property (nonatomic) Q fmfProvisionedState;
@property (nonatomic) BOOL restrictLocationSharing;
@property (nonatomic) BOOL disableLocationSharing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendMappingPacket:toHandle:;
- (void)didChangeActiveLocationSharingDevice:;
- (void)setSession:;
- (id)init;
- (void)dealloc;
- (id)activeDevice;
- (void)didStopAbilityToGetLocationForHandle:;
- (id)locationForHandle:;
- (id)_accountStore;
- (id)session;
- (void).cxx_destruct;
- (void)didStartAbilityToGetLocationForHandle:;
- (void)didStartSharingMyLocationWithHandle:;
- (void)_accountStoreDidChangeNotification:;
- (void)didStopSharingMyLocationWithHandle:;
- (void)didReceiveLocation:;
- (void)didUpdateHidingStatus:;
- (void)stopSharingWithHandle:inChat:;
- (BOOL)restrictLocationSharing;
- (BOOL)disableLocationSharing;
- (BOOL)fmfHandleIsSharingLocationWithMe:;
- (void)refreshLocationForHandle:inChat:;
- (id)timedOfferExpirationForChat:;
- (id)locationForHandleOrSibling:;
- (void)startSharingWithHandle:inChat:untilDate:;
- (void)makeThisDeviceActiveDevice;
- (BOOL)handleIsFollowingMyLocation:;
- (id)_bestAccountForAddresses:;
- (BOOL)imIsProvisionedForLocationSharing;
- (id)fmfHandlesForChat:;
- (id)fmfOpenURLStringForChat:;
- (id)allSiblingFMFHandlesForChat:;
- (void)startTrackingLocationForHandle:;
- (void)startTrackingLocationForChat:;
- (void)stopTrackingLocationForHandle:;
- (void)stopTrackingLocationForChat:;
- (void)startSharingWithChat:untilDate:;
- (void)stopSharingWithChat:;
- (id)locationForFMFHandle:;
- (void)refreshLocationForChat:;
- (BOOL)handleIsSharingLocationWithMe:;
- (BOOL)chatHasParticipantsSharingLocationWithMe:;
- (BOOL)chatHasSiblingParticipantsSharingLocationWithMe:;
- (BOOL)allChatParticipantsSharingLocationWithMe:;
- (BOOL)fmfHandleIsFollowingMyLocation:;
- (BOOL)chatHasParticipantsFollowingMyLocation:;
- (BOOL)allChatParticipantsFollowingMyLocation:;
- (void)_updateActiveDevice;
- (void)friendshipRequestReceived:;
- (void)friendshipWasRemoved:;
- (void)_startSharingWithFMFHandles:inChat:untilDate:;
- (void)_stopSharingWithFMFHandles:inChat:;
- (id)_callerIDForChat:;
- (void)_postRelationshipStatusDidChangeNotificationWithHandle:;
- (void)_postNotification:object:userInfo:;
- (Class)__FMFSessionClass;
- (id)fmfGroupIdOneToOne;
- (id)fmfGroupIdGroup;
- (void)setActiveDevice:;
- (id)establishingAccountID;
- (void)setEstablishingAccountID:;
- (unsigned long long)fmfProvisionedState;
- (void)setFmfProvisionedState:;
+ (id)sharedInstance;
@end
