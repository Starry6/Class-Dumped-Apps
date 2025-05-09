@interface CNMockContactsLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)serviceError:;
- (void)applyContactUpdateOfKind:value:property:;
- (void)contactsAccessWasGranted;
- (void)resettingSortDataIfNeeded:;
- (void)postingNotification:;
- (void)addingContacts:toContainerWithIdentifier:;
- (void)fetchingContacts:;
- (void)changingMeContact:;
- (void)fetchingContainers:;
- (void)didFetchEncodedContacts:error:;
- (void)didFetchContacts:error:;
- (void)fetchingDefaultContainerIdentifier:;
- (void)errorWhenQueryingTetheredSyncData:;
- (void)saveRequestFailed:;
- (void)fetchingChangeHistory:;
- (void)deleteImageRecentsMetadataRequestFailed:;
- (void)fetchContactsMatchingPredicate:unifyResults:keysToFetch:;
- (void)fetchingMeContactIdentifier:;
- (void)removeContactImageData;
- (void)failedToApplyContactUpdateOfKind:value:property:error:;
- (void)XPCConnectionWasInvalidated;
- (void)SPIUsageLackingEntitlementRejectedForPID:;
- (void)settingDefaultAccount:;
- (void)fetchingContactsBatch:;
- (void)contactsAccessWasDeniedWithError:;
- (void)saving:;
- (void)postingNotificationWithName:;
- (void)SPIUsageLackingEntitlementGrantedForPID:;
- (void)requestingAccessForContacts:;
- (void)accessAuthorizationStatusWasDenied;
- (void)fetchContactsProgressivelyMatchingPredicate:unifyResults:keysToFetch:;
- (void)clearingChangeHistory:;
- (void)fetchingContactIdentifierWithMatchingDictionary:;
- (void)servicingContactsRequest:;
- (void)setContactImageData:format:cropRect:;
- (void)setContactImageData:;
- (void)requestAuthorizationWasDenied;
- (void)updatingContact:;
- (void)XPCConnectionWasInterrupted;
- (void)registeringForChangeHistory:;
- (void)unregisteringForChangeHistory:;
- (void)fetchingContactSectionCounts:;
- (void)internalError:;
- (void)fetchingContactCount:;
- (void)fetchingContactWithUserActivity:;
- (void)saveRequestInvalid:;
- (void)fetchEncodedContactsMatchingPredicate:unifyResults:keysToFetch:;
- (void)fetchingGroups:;
- (void)deletingContact:;
- (void)setContactImageDataZeroCropRect:format:;
- (void)changedMeContact:;
@end
