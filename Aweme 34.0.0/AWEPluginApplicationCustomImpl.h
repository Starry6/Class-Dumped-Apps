@interface AWEPluginApplicationCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostCookieForURL:;
- (id)bdp_innerPackageBundle;
- (id)bdp_innerGameBundle;
- (id)bdp_hostCookieForURL:;
- (id)bdp_registerSceneInfo;
- (id)appInfo;
+ (id)sharedPlugin;
@end
