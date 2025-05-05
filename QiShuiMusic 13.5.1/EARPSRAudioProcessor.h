@interface EARPSRAudioProcessor : NSObject
@property (nonatomic) <EARPSRAudioProcessorDelegate> delegate;
@property (nonatomic) NSString configRoot;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q batchSize;
- (void)dealloc;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void)setDelegate:;
- (void)endAudio;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (id).cxx_construct;
- (id)initWithConfigFile:configRoot:sampleRate:delegate:;
- (id)initWithConfigFile:configRoot:sampleRate:delegate:queue:;
- (void)addAudio:;
- (void)resetForNewRequest;
- (void)_startComputeTask;
- (id)configRoot;
- (void)setConfigRoot:;
@end
