@interface IMPerfProfilerDefaultBehavior : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)perfProfiler:measurementDidFinish:withSink:;
+ (id)instance;
@end
