@interface BDASifMonitorInterceptor : NSObject
@property (nonatomic) BDASifConfiguration config;
@property (nonatomic) BDXMonitor bdxMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdxMonitor;
- (void)removeInterceptor;
- (void)setBdxMonitor:;
- (void)trackAdEventStayPage:;
- (void)xMonitor:didReportWithEventName:bizTag:commonParams:metric:category:extra:platform:aid:maySample:urlString:;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
@end
