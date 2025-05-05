@interface IMPerfNSLogProfilerSink : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)perfProfiler:measurementDidFinish:;
+ (id)instance;
@end
