@interface BDSchemaConfig : NSObject
@property (nonatomic) NSArray interceptors;
@property (nonatomic) <BDSchemaMonitorProtocol> monitor;
- (void)addInterceptor:;
- (id)__initWithMonitor:;
- (id)interceptors;
- (void)setInterceptors:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)configWithMonitor:;
@end
