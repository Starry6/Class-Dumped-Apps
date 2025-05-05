@interface DNDAppInfoService : NSObject
- (id)_initWithClientIdentifier:;
- (void).cxx_destruct;
- (id)getAppInfoForBundleIdentifier:error:;
- (id)getAppInfoForBundleIdentifiers:error:;
+ (id)serviceForClientIdentifier:;
@end
