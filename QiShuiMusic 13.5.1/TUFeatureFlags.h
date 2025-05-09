@interface TUFeatureFlags : NSObject
@property (nonatomic) BOOL announceCalls;
@property (nonatomic) BOOL conversationOneToOneModeEnabled;
@property (nonatomic) BOOL conversationHandoffEnabled;
@property (nonatomic) BOOL vouchingEnabled;
@property (nonatomic) BOOL addTVAsActiveParticipant;
@property (nonatomic) BOOL groupFacetimeAsAServiceEnabled;
@property (nonatomic) BOOL filterGFTaaSCalls;
@property (nonatomic) BOOL gelatoEnabled;
@property (nonatomic) BOOL collaborateTogetherEnabled;
@property (nonatomic) BOOL offrampEnabled;
@property (nonatomic) BOOL uNNotificationsMacOSEnabled;
@property (nonatomic) BOOL expanseEnabled;
@property (nonatomic) BOOL sharePlayDisabled;
@property (nonatomic) BOOL sharePlayDiscoverabilityEnabled;
@property (nonatomic) BOOL sharePlayWithAirplayEnabled;
@property (nonatomic) BOOL ftvSpatialAudioEnabled;
@property (nonatomic) BOOL FTUserScore;
@property (nonatomic) BOOL livePhotoXPCServiceEnabled;
@property (nonatomic) BOOL nonInterruptingCalls;
@property (nonatomic) BOOL qrPluginEncryptionEnabled;
@property (nonatomic) BOOL unreliableMessengerEnabled;
@property (nonatomic) BOOL supportsScreenSharing;
@property (nonatomic) BOOL individualAudioVideoToggleEnabled;
@property (nonatomic) BOOL expanseBTSwitchingEnabled;
@property (nonatomic) BOOL TTRBannerEnabled;
@property (nonatomic) BOOL aTVHandoff;
@property (nonatomic) BOOL suggestionsReloadForSelectedRecipients;
@property (nonatomic) BOOL gftDowngradeToOneToOne;
@property (nonatomic) BOOL uPlusNDowngrade;
@property (nonatomic) BOOL requestA2DPOverIncomingCalls;
@property (nonatomic) BOOL mochiEnabled;
@property (nonatomic) BOOL screenCaptureKitEnabled;
@property (nonatomic) BOOL avLessSharePlayEnabled;
@property (nonatomic) BOOL continuityCaptureEnabled;
@property (nonatomic) BOOL avcCameraSelectionEnabled;
@property (nonatomic) BOOL greenTeaLinksEnabled;
@property (nonatomic) BOOL screenSharingCALayerHostMode;
@property (nonatomic) BOOL screenSharingDeskViewEnabled;
@property (nonatomic) BOOL screenSharingDeskViewSqueegeeEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)announceCalls;
- (BOOL)sharePlayDisabled;
- (BOOL)screenCaptureKitEnabled;
- (BOOL)aTVHandoff;
- (BOOL)TTRBannerEnabled;
- (BOOL)gftDowngradeToOneToOne;
- (BOOL)addTVAsActiveParticipant;
- (BOOL)ftvSpatialAudioEnabled;
- (BOOL)individualAudioVideoToggleEnabled;
- (BOOL)expanseEnabled;
- (BOOL)continuityCaptureEnabled;
- (BOOL)screenSharingDeskViewEnabled;
- (BOOL)expanseBTSwitchingEnabled;
- (BOOL)collaborateTogetherEnabled;
- (BOOL)uPlusNDowngrade;
- (BOOL)expanseEnabledForTV;
- (BOOL)avLessSharePlayEnabled;
- (BOOL)filterGFTaaSCalls;
- (BOOL)nonInterruptingCalls;
- (BOOL)conversationHandoffEnabled;
- (BOOL)qrPluginEncryptionEnabled;
- (BOOL)screenSharingDeskViewSqueegeeEnabled;
- (BOOL)mochiEnabled;
- (BOOL)supportsScreenSharing;
- (BOOL)greenTeaLinksEnabled;
- (BOOL)requestA2DPOverIncomingCalls;
- (BOOL)screenSharingCALayerHostMode;
- (BOOL)conversationOneToOneModeEnabled;
- (BOOL)sharePlayWithAirplayEnabled;
- (BOOL)groupFacetimeAsAServiceEnabled;
- (BOOL)vouchingEnabled;
- (BOOL)gelatoEnabled;
- (BOOL)unreliableMessengerEnabled;
- (BOOL)uNNotificationsMacOSEnabled;
- (BOOL)avcCameraSelectionEnabled;
- (BOOL)suggestionsReloadForSelectedRecipients;
- (BOOL)offrampEnabled;
- (BOOL)livePhotoXPCServiceEnabled;
- (BOOL)sharePlayDiscoverabilityEnabled;
- (BOOL)expanseEnabledForMusic;
- (BOOL)FTUserScore;
@end
