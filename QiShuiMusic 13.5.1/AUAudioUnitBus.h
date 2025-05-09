@interface AUAudioUnitBus : NSObject
@property (nonatomic) {vector<BusPropertyObserver observers;
@property (nonatomic) AVAudioFormat format;
@property (nonatomic) BOOL shouldAllocateBuffer;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString name;
@property (nonatomic) Q index;
@property (nonatomic) q busType;
@property (nonatomic) AUAudioUnit ownerAudioUnit;
@property (nonatomic) NSArray supportedChannelLayoutTags;
@property (nonatomic) double contextPresentationLatency;
- (void)removeObserver:forKeyPath:;
- (void)addObserver:forKeyPath:options:context:;
- (void)dealloc;
- (void)setName:;
- (id)format;
- (id)ownerAudioUnit;
- (long long)busType;
- (unsigned long long)index;
- (void)removeObserver:forKeyPath:context:;
- (void)setEnabled:;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)name;
- (id)observers;
- (id).cxx_construct;
- (BOOL)isEnabled;
- (id)supportedChannelLayoutTags;
- (BOOL)setFormat:error:;
- (id)initWithFormat:error:;
- (void)setBusType:;
- (void)setOwnerAudioUnit:;
- (void)setSupportedChannelCounts:;
- (id)supportedChannelCounts;
- (unsigned int)maximumChannelCount;
- (void)setMaximumChannelCount:;
- (BOOL)shouldAllocateBuffer;
- (void)setShouldAllocateBuffer:;
- (double)contextPresentationLatency;
- (void)setContextPresentationLatency:;
@end
