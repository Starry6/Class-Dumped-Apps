@interface MLE5ExecutionStreamOperationPool : NSObject
@property (nonatomic) NSURL e5BundleURL;
@property (nonatomic) NSString functionName;
@property (nonatomic) NSDictionary outputDescriptionsByName;
@property (nonatomic) NSMutableSet pool;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (id)outputDescriptionsByName;
- (id)serialQueue;
- (id)functionName;
- (void).cxx_destruct;
- (id)pool;
- (id)initWithE5BundleAtURL:functionName:outputDescriptionsByName:;
- (id)takeOut;
- (void)putBack:;
- (id)e5BundleURL;
@end
