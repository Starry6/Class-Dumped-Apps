@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)notifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:;
- (void)notifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)noteSuggestedCMMAlertWithCMMUUID:notificationDeliveryDate:;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:acceptInvitation:;
- (void)noteInterestingMemoryAlertWithMemoryUUID:notificationDeliveryDate:;
- (void)noteSuggestedCMMAlertViewedWithCMMUUID:;
- (void)noteSharedLibrarySuggestionsWithNotificationDeliveryDate:;
- (void)notePhotosChallengeSubmissionWithNotificationDeliveryDate:;
- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:thumbnailImageData:notificationTitle:notificationSubtitle:;
- (void)noteInterestingMemoryAlertViewedWithUUID:;
- (void)userViewedNotificationWithAlbumCloudGUID:;
- (void)notePhotosChallengeNewQuestionsWithNotificationDeliveryDate:;
@end
