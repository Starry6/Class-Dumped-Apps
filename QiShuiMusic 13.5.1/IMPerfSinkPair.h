@interface IMPerfSinkPair : NSObject
@property (nonatomic) <IMPerfProfilerBehavior> behavior;
@property (nonatomic) <IMPerfProfilerSink> sink;
- (id)sink;
- (void).cxx_destruct;
- (id)behavior;
- (id)initWithBehavior:sink:;
@end
