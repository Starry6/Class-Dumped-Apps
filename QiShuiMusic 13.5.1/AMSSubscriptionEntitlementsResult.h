@interface AMSSubscriptionEntitlementsResult : NSObject
@property (nonatomic) NSNumber appAdamId;
@property (nonatomic) NSNumber appVersion;
@property (nonatomic) NSDictionary entitlements;
@property (nonatomic) NSDictionary serverResponse;
- (void)setAppVersion:;
- (id)appVersion;
- (id)entitlements;
- (id)exportObject;
- (void)setEntitlements:;
- (id)serverResponse;
- (void).cxx_destruct;
- (id)appAdamId;
- (void)setAppAdamId:;
- (void)setServerResponse:;
@end
