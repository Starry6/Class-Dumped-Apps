@interface SBSWidgetMetricsServer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)previewMetricsSpecificationForDeviceContext:displayContext:bundleIdentifier:;
- (id)previewMetricsSpecificationForBundleIdentifier:;
- (void)_createConnection;
- (void).cxx_destruct;
- (id)systemMetricsForWidget:;
- (id)_init;
+ (id)checkOutServerInstance;
+ (void)returnServerInstance:;
@end
