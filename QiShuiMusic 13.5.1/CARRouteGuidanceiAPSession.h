@interface CARRouteGuidanceiAPSession : NSObject
@property (nonatomic) IAPNavigation iapNavigation;
@property (nonatomic) NSMapTable navigationAccessories;
@property (nonatomic) NSString currentNavigationOwnerIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)IAPNavigationAccessoryDidBecomeAvailable:;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:;
- (void)IAPNavigationAccessory:didEnableNavigationUpdatesForComponent:;
- (void)IAPNavigationAccessory:didDisableNavigationUpdatesForComponent:;
- (void)setCurrentNavigationOwnerIdentifier:;
- (void)_setupiAPNavigation;
- (void)updateNavigationGuidanceInfo;
- (void)_updateAccessoryComponentsWithGuidanceInfo:;
- (id)currentNavigationOwnerIdentifier;
- (id)iapNavigation;
- (void)setIapNavigation:;
- (id)navigationAccessories;
- (void)setNavigationAccessories:;
+ (id)localizedNameForIdentifier:;
@end
