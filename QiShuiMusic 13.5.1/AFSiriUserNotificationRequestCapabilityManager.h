@interface AFSiriUserNotificationRequestCapabilityManager : NSObject
- (void)removeObserver:;
- (void)addObserver:;
- (void)provider:eligibleAnnouncementRequestTypesChanged:;
- (void).cxx_destruct;
- (void)provider:availableAnnouncementRequestTypesChanged:;
- (id)_initWithPlatform:;
- (void)fetchEligibleSetupStateWithCompletion:;
- (BOOL)hasEligibleSetup;
- (void)fetchRequestCanBeHandledStateWithCompletion:;
- (BOOL)requestCanBeHandled;
- (void)notifyObserversOfCurrentEligibleSetupState:onPlatform:;
- (void)notifyObserversOfCurrentRequestCanBeHandledState:onPlatform:;
+ (id)sharedManager;
+ (Class)_classForPlatform:;
+ (BOOL)supportedByApplicationWithBundleID:;
@end
