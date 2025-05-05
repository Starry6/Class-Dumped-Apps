@interface BDRLMonitorWrapper : NSObject
@property (nonatomic) BDXMonitor monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportWithEventName:bizTag:commonParams:metric:category:extra:platform:aid:sampleLevel:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
