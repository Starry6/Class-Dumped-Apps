@interface AWEFeedCachePipelineFactory : NSObject
@property (nonatomic) NSMutableArray processorFactories;
@property (nonatomic) NSMutableArray creators;
- (id)createWithTag:completedListener:failureListener:;
- (void)registerFactories:;
- (id)processorFactories;
- (id)creators;
- (void)setProcessorFactories:;
- (void)setCreators:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
