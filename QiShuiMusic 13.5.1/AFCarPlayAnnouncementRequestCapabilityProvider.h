@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sessionDidDisconnect:;
- (void)addDelegate:;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)sessionDidConnect:;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:;
- (void).cxx_destruct;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:;
- (id)initWithQueue:;
- (void)isCarPlayConnectedWithCompletion:;
- (void)_isCarPlayConnectedWithCompletion:;
- (void)updateForCarPlaySessionConnected:;
- (void)_updateForCarPlaySessionConnected:;
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:;
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:;
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:;
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:;
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:;
+ (id)provider;
+ (long long)platform;
@end
