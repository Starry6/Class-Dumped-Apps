@interface PLAssetsdCloudInternalService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deactivateLibraryScopeWithUUID:reply:;
- (id)activateLibraryScopeWithUUID:reply:;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithReply:;
- (void)setCloudPhotoLibraryPauseState:reason:;
- (id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScopeWithUUID:reply:;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:;
- (void)rampingRequestForResourceType:numRequested:reply:;
- (void)requestDeviceLibraryConfigurationChange:reply:;
- (void)publishShareWithUUID:reply:;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:reply:;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScopeWithUUID:reply:;
- (void)forceParticipantAssetTrashNotificationWithReply:;
- (void)getResetSyncStatusWithReply:;
- (void)shouldAutoEnableiCPLOnOSXWithReply:;
- (void)emailAddressForKey:reply:;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)fetchShareWithURL:ignoreExistingShare:reply:;
- (void)keyForEmailAddress:reply:;
- (void)isReadyForAnalysisWithReply:;
- (void)forceSyncMomentShareWithUUID:reply:;
- (void)removeParticipantsWithParticipantUUIDs:fromLibraryScopeWithIdentifier:retentionPolicy:exitSource:reply:;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithReply:;
- (void)sharedLibraryRampCheckWithReply:;
- (void)cloudSharingSpaceManagementRequestWithType:optionalBytesToPurge:reply:;
- (void)syncCloudPhotoLibrary;
- (void)enablePhotostreamsWithStreamID:;
- (void)overrideSystemBudgetsForSyncSession:pauseReason:systemBudgets:reply:;
- (void)queryUserIdentitiesWithEmails:phoneNumbers:reply:;
- (void)markResourcesPurgeableWithUrgency:assetUuids:reply:;
- (void)getSystemBudgetsWithReply:;
- (void)getCurrentTransferProgress:;
- (void)createPhotostreamAlbumWithStreamID:;
- (void)personInfoDictionaryForPersonID:reply:;
- (void)setCloudPhotoLibraryEnabledState:;
- (void)startExitFromLibraryScopeWithIdentifier:retentionPolicy:exitSource:reply:;
- (void)setPersonInfoDictionary:forPersonID:;
- (void)acceptShareWithUUID:reply:;
- (void)isReadyForCloudPhotoLibraryWithReply:;
- (void)getNotUploadedCount:;
@end
