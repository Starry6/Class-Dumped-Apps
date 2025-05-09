@interface VEAsyncQueueUnit : NSObject
@property (nonatomic) NSMutableArray sampleDataQueue;
@property (nonatomic) NSLock sampleDataQueueLock;
@property (nonatomic) NSCondition videoQueCont;
@property (nonatomic) NSCondition videoEmptyCont;
@property (nonatomic) NSThread asyncThread;
@property (nonatomic) Q asyncThreadStatus;
@property (nonatomic) NSMutableArray audioSampleDataQueue;
@property (nonatomic) NSLock audioSampleDataQueueLock;
@property (nonatomic) q maxQueueCount;
@property (nonatomic) BOOL encodeUseFenceRender;
@property (nonatomic) <VEProcessSampleDelegate> downstream;
@property (nonatomic) NSString name;
@property (nonatomic) q curVideoStage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString route;
- (void)setAsyncThread:;
- (void)initBufferQueue;
- (id)sampleDataQueue;
- (id)asyncThread;
- (unsigned long long)asyncThreadStatus;
- (id)audioSampleDataQueue;
- (id)audioSampleDataQueueLock;
- (long long)curVideoStage;
- (void)dequeueSampleBufFunc;
- (BOOL)encodeUseFenceRender;
- (long long)maxQueueCount;
- (void)p_releaseSampleDataQueue:;
- (BOOL)processSampleData:;
- (id)requstSampleData:;
- (id)sampleDataQueueLock;
- (void)setAsyncThreadStatus:;
- (void)setAudioSampleDataQueue:;
- (void)setAudioSampleDataQueueLock:;
- (void)setCurVideoStage:;
- (void)setEncodeUseFenceRender:;
- (void)setMaxQueueCount:;
- (void)setSampleDataQueue:;
- (void)setSampleDataQueueLock:;
- (void)setVideoEmptyCont:;
- (void)setVideoQueCont:;
- (void)startThread;
- (id)videoEmptyCont;
- (id)videoQueCont;
- (void)becomeActive;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)setRoute:;
- (id)route;
- (id)downstream;
- (BOOL)setConfig:;
- (void)setDownstream:;
- (void)finish;
- (void)enterBackground;
- (void).cxx_destruct;
- (void)enterForeground;
- (id)name;
- (void)resignActive;
- (void)stopThread;
- (void)memoryWarning;
- (void)p_lock;
- (void)p_unlock;
@end
