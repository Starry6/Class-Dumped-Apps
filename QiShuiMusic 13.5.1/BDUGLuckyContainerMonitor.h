@interface BDUGLuckyContainerMonitor : NSObject
@property (nonatomic) NSMutableDictionary dict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerDidLoadFailedWithURLString:;
- (void)containerDidPageReadyWithURLString:;
- (void)xMonitor:didReportWithEventName:bizTag:commonParams:metric:category:extra:platform:aid:maySample:urlString:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
- (void)report:;
+ (void)setupContainerMonitorModule;
+ (id)sharedInstance;
@end
