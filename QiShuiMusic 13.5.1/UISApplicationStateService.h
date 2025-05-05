@interface UISApplicationStateService : NSObject
@property (nonatomic) <UISApplicationStateServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:;
- (id)initWithCalloutQueue:;
- (void)listener:didReceiveConnection:withContext:;
- (void)setDelegate:;
- (id)_operatingBundleIdentifier;
- (id)setUsesBackgroundNetwork:;
- (BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:description:;
- (id)setMinimumBackgroundFetchInterval:;
- (void)usesBackgroundNetworkWithCompletion:;
- (id)_dataSourceForApplicationBundleIdentifier:;
- (id)delegate;
- (void)badgeValueWithCompletion:;
- (void).cxx_destruct;
- (void)setBadgeValue:;
- (id)setNextWakeIntervalSinceReferenceDate:;
- (id)setBadgeNumber:;
- (id)setBadgeString:;
- (BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:description:legacyEntitlement:;
@end
