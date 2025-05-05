@interface INUserActivityExecutionInfo : INExecutionInfo
@property (nonatomic) NSString userActivityType;
- (void).cxx_destruct;
- (id)userActivityType;
- (id)initWithUserActivityType:launchableAppBundleId:;
- (id)_initWithUserActivityType:launchableAppBundleId:containingAppBundleURL:extensionBundleId:;
- (BOOL)canRunOnLocalDevice;
@end
