@interface AWEPluginBasicInfoImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRV;
- (id)bdp_appId;
- (id)bdp_deviceIdWithAppID:;
- (id)bdp_registerApplicationInfo;
- (id)bdp_installIdWithAppID:;
- (BOOL)bdp_isAweType;
- (id)appInfo;
+ (id)sharedPlugin;
@end
