@interface AWEPluginLocationCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdp_requestCurrentLocationWithAccuracy:completion:appId:apiName:;
- (void)bdp_initSharedLocationManager;
- (long long)bdp_getAuthorizationStatus;
- (long long)bdp_getAccuracyAuthorization;
- (void)bdp_requestAuthorizationWithCompletion:;
- (id)bdp_getCurrentLocationCache;
- (void)bdp_requestCurrentLocationWithCompletion:;
- (id)bdp_subscribeHeadlingUpdateWithBlock:;
- (void)bdp_unsubscribeHeadlingUpdateWithToken:;
- (id)bdp_subscribeLocationUpdateWithAccuracy:distanceFilter:block:appId:apiName:;
- (void)bdp_unsubscribeLocationUpdateWithToken:;
- (long long)transformAWELocationAccuracy:;
+ (id)sharedPlugin;
@end
