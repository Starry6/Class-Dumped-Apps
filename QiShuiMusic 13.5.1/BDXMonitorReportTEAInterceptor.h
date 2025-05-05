@interface BDXMonitorReportTEAInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__platformStrWithplatform:;
- (void)__reportTeaWithXMonitor:eventName:bizTag:commonParams:metric:category:extra:platform:aid:urlString:;
- (BOOL)matchWithChannel:;
- (BOOL)matchWithURLString:;
- (void)xMonitor:didReportWithEventName:bizTag:commonParams:metric:category:extra:platform:aid:maySample:urlString:;
@end
