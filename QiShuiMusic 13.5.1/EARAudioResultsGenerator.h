@interface EARAudioResultsGenerator : NSObject
@property (nonatomic) <EARAudioResultsGeneratorDelegate> delegate;
@property (nonatomic) NSString configRoot;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)setDelegate:;
- (void)endAudio;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (id).cxx_construct;
- (id)initWithConfigFile:configRoot:sampleRate:delegate:queue:;
- (void)addAudio:;
- (void)resetForNewRequest;
- (id)configRoot;
- (void)setConfigRoot:;
- (id)audioResultMatrix;
- (id)audioResultLastVector;
@end
