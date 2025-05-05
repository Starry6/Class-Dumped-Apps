@interface STCoreOrganizationSettings : STUniquedManagedObject
@property (nonatomic) STCoreUser user;
@property (nonatomic) NSString passcode;
@property (nonatomic) BOOL allLimitsEnabled;
@property (nonatomic) q communicationPolicy;
@property (nonatomic) q communicationWhileLimitedPolicy;
@property (nonatomic) q contactManagementState;
@property (nonatomic) BOOL needsToSetPasscode;
@property (nonatomic) BOOL isCommunicationSafetySendingRestricted;
@property (nonatomic) BOOL isCommunicationSafetyReceivingRestricted;
@property (nonatomic) BOOL isCommunicationSafetyNotificationEnabled;
@property (nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)updateWithDictionaryRepresentation:;
- (id)redactedDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)_changeAppLimitsFromAskToWarn:;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:;
+ (id)fetchOrCreateWithDictionaryRepresentation:inContext:error:;
@end
