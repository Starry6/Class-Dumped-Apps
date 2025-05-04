@interface AWEFileKitServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resourceMetricWithRootPath:businessLine:traceLevel:;
- (id)resourceMetricWithRootPath:businessLine:traceLevel:enableDefaultMetric:;
- (id)filekitManager;
+ (id)sharedInstance;
@end
