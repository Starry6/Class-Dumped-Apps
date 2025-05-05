@interface INExecutionInfo : NSObject
@property (nonatomic) LSApplicationRecord _applicationRecord;
@property (nonatomic) INAppInfo _appInfo;
@property (nonatomic) NSString launchableAppBundleId;
@property (nonatomic) NSString displayableAppBundleId;
@property (nonatomic) NSString extensionBundleId;
@property (nonatomic) NSURL containingAppBundleURL;
@property (nonatomic) BOOL canRunOnLocalDevice;
- (id)extensionBundleId;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)_appInfo;
- (id)_initWithLaunchableAppBundleId:displayableAppBundleId:containingAppBundleURL:extensionBundleId:;
- (BOOL)canRunOnLocalDevice;
- (id)_applicationRecord;
- (id)launchableAppBundleId;
- (id)displayableAppBundleId;
- (id)containingAppBundleURL;
@end
