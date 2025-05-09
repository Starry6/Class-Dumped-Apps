@interface EKCalendar : EKObject
@property (nonatomic) Q cachedJunkStatus;
@property (nonatomic) EKSource source;
@property (nonatomic) NSString calendarIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) q type;
@property (nonatomic) BOOL allowsContentModifications;
@property (nonatomic) BOOL subscribed;
@property (nonatomic) BOOL immutable;
@property (nonatomic) ^{CGColor=} CGColor;
@property (nonatomic) Q supportedEventAvailabilities;
@property (nonatomic) Q allowedEntityTypes;
- (id)notes;
- (void)setSubscribed:;
- (void)setSubscriptionID:;
- (id)allAlarms;
- (id)calendarIdentifier;
- (BOOL)_reset;
- (id)syncError;
- (id)digest;
- (void)setLocale:;
- (void)rollback;
- (BOOL)refresh;
- (void)setSyncToken:;
- (BOOL)readOnly;
- (void)setMaxAttendees:;
- (id)init;
- (id)sharedOwnerAddress;
- (void)setOwnerIdentityLastName:;
- (BOOL)isFamilyCalendar;
- (void)setSymbolicColorName:;
- (void)setReadOnly:;
- (BOOL)canBeShared;
- (id)lastSyncStartDate;
- (BOOL)isSubscribed;
- (id)pushKey;
- (void)setUnlocalizedTitle:;
- (void)setPubcalAccountID:;
- (BOOL)validate:;
- (id)alarms;
- (id)externalID;
- (id)syncToken;
- (void)setCanBePublished:;
- (id)ownerIdentityEmail;
- (void)setSharees:;
- (id)subscriptionID;
- (BOOL)isPublished;
- (id)ownerIdentityDisplayName;
- (id)symbolicColorName;
- (unsigned long long)lastSyncError;
- (void)setUUID:;
- (void)setSelfIdentityAddressString:;
- (void)setPushKey:;
- (id)externalIDTag;
- (long long)maxAttendees;
- (id)ownerIdentityLastName;
- (id)sharees;
- (id)pubcalAccountID;
- (void)setAllowedEntities:;
- (BOOL)remove:;
- (void)setSharedOwnerURLString:;
- (id)publishURL;
- (BOOL)hasEvents;
- (void)setAlarms:;
- (void)setOwnerIdentityFirstName:;
- (void)setDisplayOrder:;
- (void)setOwnerIdentityPhoneNumber:;
- (id)locale;
- (void)setRefreshDate:;
- (id)selfIdentityPhoneNumber;
- (id)CGColor;
- (void)setOwnerIdentityDisplayName:;
- (id)externalRepresentation;
- (void)setTitle:;
- (void)setInvitationStatus:;
- (BOOL)isMarkedUndeletable;
- (void)setSubcalAccountID:;
- (int)refreshInterval;
- (BOOL)save:;
- (BOOL)supportsJunkReporting;
- (void)setSelfIdentityFirstName:;
- (id)ownerIdentityFirstName;
- (void)setLastSyncStartDate:;
- (id)lastSyncTitle;
- (void)setDigest:;
- (id)publishURLString;
- (id)selfIdentityEmail;
- (id)ownerIdentityPhoneNumber;
- (id)selfIdentityFirstName;
- (id)subcalAccountID;
- (BOOL)canBePublished;
- (void)setColorStringRaw:;
- (void)setExternalID:;
- (id)subcalURL;
- (id)lastSyncEndDate;
- (id)externalModificationTag;
- (void)setColorDisplayOnly:;
- (id)refreshDate;
- (void)setAllowsEvents:;
- (id)unlocalizedTitle;
- (BOOL)isManaged;
- (long long)type;
- (unsigned long long)invitationStatus;
- (id)title;
- (BOOL)isSyncing;
- (int)allowedEntities;
- (void)setSelfIdentityDisplayName:;
- (void)setOwnerIdentityId:;
- (void)setCanBeShared:;
- (void)setSelfIdentityLastName:;
- (id)colorStringRaw;
- (void)setOwnerIdentityEmail:;
- (id)sharedOwnerURLString;
- (void)setPublishURL:;
- (void)setExternalIDTag:;
- (void)setAllAlarms:;
- (id)ownerIdentityAddressString;
- (id)source;
- (BOOL)isColorDisplayOnly;
- (int)entityType;
- (unsigned long long)sharingStatus;
- (void)setIsPublished:;
- (void)setSelfIdentityPhoneNumber:;
- (void)reset;
- (void)setHidden:;
- (id)selfIdentityDisplayName;
- (void)setNotes:;
- (void)setSharingStatus:;
- (void)setExternalModificationTag:;
- (id)description;
- (void)setLastSyncEndDate:;
- (void)setRefreshInterval:;
- (void)setSyncError:;
- (void)setExternalRepresentation:;
- (void)setPublishURLString:;
- (void)setFlags:;
- (int)ownerIdentityId;
- (void)setSharedOwnerAddress:;
- (unsigned int)flags;
- (unsigned long long)sharingInvitationResponse;
- (void)setOwnerIdentityAddressString:;
- (id)UUID;
- (BOOL)isHidden;
- (void)setLastSyncTitle:;
- (void)setSharedOwnerName:;
- (int)displayOrder;
- (void)setSource:;
- (void)setSelfIdentityEmail:;
- (void)setSubcalURL:;
- (BOOL)isMarkedImmutableSharees;
- (void)setSharingInvitationResponse:;
- (id)sharedOwnerName;
- (BOOL)isImmutable;
- (id)selfIdentityLastName;
- (id)selfIdentityAddressString;
- (BOOL)isDeletable;
- (id)externalURI;
- (void)addAlarms:;
- (void)setCalendarIdentifier:;
- (id)colorString;
- (void)setColorString:;
- (BOOL)_validateDeletable:;
- (BOOL)_validateAccessConsent:;
- (id)findOriginalAlarmStartingWith:;
- (void)snoozeAlarm:withTimeIntervalFromNow:;
- (void)snoozeAlarm:withLocation:proximity:;
- (BOOL)isAlarmAcknowledgedPropertyDirty;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)removeAllSnoozedAlarms;
- (unsigned long long)cachedJunkStatus;
- (void)setCachedJunkStatus:;
- (unsigned long long)allowedEntityTypes;
- (void)setAllowedEntityTypes:;
- (BOOL)couldBeJunk;
- (id)sendersEmail;
- (id)sendersPhoneNumber;
- (void)clearInvitationStatus;
- (void)_updateToMaxDisplayOrder;
- (void)reorderBetweenEarlier:later:;
- (id)reorderCalendars:betweenEarlier:later:;
- (void)assignColorForNewCalendarIfNeeded;
- (BOOL)getColorRed:green:blue:;
- (void)_clearCGColorCache;
- (void)setCGColor:;
- (BOOL)_flagValueWithMask:;
- (void)_setFlagValue:withMask:;
- (BOOL)allowsContentModifications;
- (void)setAllowsContentModifications:;
- (BOOL)isDefaultSchedulingCalendar;
- (void)setIsDefaultSchedulingCalendar:;
- (BOOL)isInbox;
- (void)setInbox:;
- (BOOL)isNotificationsCollection;
- (void)setNotificationsCollection:;
- (BOOL)allowsDeletionOrPropertyModifications;
- (BOOL)isImmutableRaw;
- (void)setImmutable:;
- (BOOL)isSubscribedCalendarJunk;
- (void)setIsSubscribedCalendarJunk:;
- (BOOL)isDeletableWithAllKnownCalendars:;
- (BOOL)_validateDeletableWithAllKnownCalendars:error:;
- (BOOL)_validateDeletableHelperWithAllKnownCalendars:error:;
- (long long)deletionWarningsMask;
- (BOOL)canMergeWithCalendar:;
- (BOOL)eligibleForDefaultSchedulingCalendar;
- (BOOL)_anotherCalendarForDefaultSchedulingExistsWithAllKnownCalendars:;
- (BOOL)_anotherCalendarForRemindersExistsWithAllKnownCalendars:;
- (BOOL)_anyCalendarExistsInSameSourceOfType:withAllKnownCalendars:passingTest:;
- (BOOL)allowsScheduling;
- (void)setAllowsScheduling:;
- (BOOL)prohibitsScheduling;
- (void)setProhibitsScheduling:;
- (BOOL)isSharingInvitation;
- (void)setSharingInvitation:;
- (void)setSharedOwnerURL:;
- (id)sharedOwnerURL;
- (id)sharedOwnerEmail;
- (id)sharedOwnerPhoneNumber;
- (BOOL)isFacebookBirthdayCalendar;
- (void)setFacebookBirthdayCalendar:;
- (BOOL)isHolidayCalendar;
- (BOOL)isSyncedHolidayCalendar;
- (void)setSyncedHolidayCalendar:;
- (BOOL)isHolidaySubscribedCalendar;
- (BOOL)isSubscribedHolidayCalendar;
- (void)setSubscribedHolidayCalendar:;
- (BOOL)isChinaHolidayCalendar;
- (void)setChinaHolidayCalendar:;
- (void)setFamilyCalendar:;
- (void)setMarkedUndeletable:;
- (void)setMarkedImmutableSharees:;
- (BOOL)isSuggestionsCalendar;
- (BOOL)isSuggestedEventCalendar;
- (BOOL)isNaturalLanguageSuggestedEventCalendar;
- (BOOL)isMutableSuggestionsCalendar;
- (BOOL)isMutableNaturalLanguageSuggestionsCalendar;
- (BOOL)isIgnoringEventAlerts;
- (void)setIsIgnoringEventAlerts:;
- (BOOL)allowsIgnoringSharedEventChangeNotifications;
- (BOOL)isIgnoringSharedCalendarNotifications;
- (void)setIsIgnoringSharedCalendarNotifications:;
- (BOOL)isAffectingAvailability;
- (void)setIsAffectingAvailability:;
- (int)migrationVersion;
- (void)setMigrationVersion:;
- (id)syncHash;
- (id)selectionSyncIdentifier;
- (BOOL)allowEvents;
- (BOOL)allowReminders;
- (void)setAllowReminders:;
- (unsigned long long)supportedEventAvailabilities;
- (void)setLastSyncError:userInfo:;
- (id)lastSyncErrorUserInfo;
- (id)calendarError;
- (BOOL)stripAlarms;
- (void)setStripAlarms:;
- (BOOL)stripAttachments;
- (void)setStripAttachments:;
- (void)moveSubscribedCalendarToSource:;
- (void)removeServerRefreshRelatedPropertiesForSelfAndAllEventsSaveAndCommitWithError:;
- (void)addSharee:;
- (void)removeSharee:;
- (BOOL)hasSharees;
- (id)shareesAndOwner;
- (void)removeAlarms:;
- (id)selfIdentityAddress;
- (void)setSelfIdentityAddress:;
- (id)ownerIdentityAddress;
- (void)setOwnerIdentityAddress:;
- (id)ownerIdentityOrganizer;
- (BOOL)automaticEventLocationGeocodingAllowed;
- (id)exportData;
- (id)exportDataWithOptions:;
- (void)setIsJunk:;
+ (id)knownSingleValueKeysForComparison;
+ (BOOL)isWeakRelationship;
+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (id)rowIDsForCalendars:;
+ (id)calendarWithEventStore:;
+ (id)calendarForEntityType:eventStore:;
+ (id)calendarForEntityTypes:eventStore:;
+ (id)orderSortDescriptors;
+ (id)_eventKitBundle;
+ (id)typeDescription:;
@end
