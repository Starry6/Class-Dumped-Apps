@interface ABUApp : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString version;
- (id)_getAppBundleID;
- (id)_getAppName;
- (id)_getAppVersion;
- (id)init;
- (id)version;
- (void).cxx_destruct;
- (id)name;
- (id)bundleID;
+ (id)currentApp;
@end
