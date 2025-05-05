@interface LiveStreamRenderSinkBuffer : NSObject
@property (nonatomic) ^v mData;
@property (nonatomic) NSInteger mBufferSize;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger channels;
@property (nonatomic) NSInteger samplesPerChannel;
@property (nonatomic) I timestamp;
- (void)setMBufferSize:;
- (int)samplesPerChannel;
- (void)setMData:;
- (void)setSamplesPerChannel:;
- (int)channels;
- (id)init;
- (void)dealloc;
- (int)sampleRate;
- (void)setTimestamp:;
- (void)setChannels:;
- (unsigned int)timestamp;
- (void)reset;
- (void)setSampleRate:;
- (id)mData;
- (int)mBufferSize;
@end
