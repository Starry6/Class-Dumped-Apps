@interface VEAudioResamplerUnit : IESMMObject
@property (nonatomic) ^{OpaqueAudioConverter=} converter;
@property (nonatomic) {AudioBufferList=I[1{AudioBuffer=II^v}]} bufferList;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} targetAsbd;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} sourceAsbd;
@property (nonatomic) ^{AudioBuffer=II^v} convertBuffer;
@property (nonatomic) NSInteger kBytesPerPacket;
- (int)kBytesPerPacket;
- (id)bufferList;
- (id)convertBuffer;
- (void)convertSrcBufferList:toBufferList:isFullCache:;
- (void)convertSrcBufferList:toBufferQuene:isFullCache:;
- (id)initWithSourceAsbd:targetAsbd:;
- (void)p_convertSrcBufferList:toBufferQuene:isFullCache:;
- (unsigned int)resampleDatasie:;
- (void)setBufferList:;
- (void)setConvertBuffer:;
- (void)setKBytesPerPacket:;
- (void)setSourceAsbd:;
- (void)setTargetAsbd:;
- (id)sourceAsbd;
- (id)targetAsbd;
- (void)updateAsbd:;
- (void)dealloc;
- (id)converter;
- (void)setConverter:;
@end
