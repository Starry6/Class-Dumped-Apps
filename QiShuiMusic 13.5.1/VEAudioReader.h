@interface VEAudioReader : IESMMObject
@property (nonatomic) AVAsset asset;
@property (nonatomic) IESAudioConverter audioConverter;
@property (nonatomic) VEAudioResamplerUnit resampleUnit;
@property (nonatomic) {AudioBufferQueue=*I} renderQueue;
@property (nonatomic) NSInteger converterNumberFrames;
@property (nonatomic) ^{AudioBufferList=I[1{AudioBuffer=II^v}]} converterAudioBuffer;
@property (nonatomic) ^{AudioBufferList=I[1{AudioBuffer=II^v}]} decodeBufferList;
@property (nonatomic) BOOL endOfFile;
@property (nonatomic) VEAudioEffectUnit effectUnit;
@property (nonatomic) q channels;
@property (nonatomic) double sampleRate;
@property (nonatomic) AVAssetReader assetReader;
@property (nonatomic) AVAssetReaderOutput audioOutput;
@property (nonatomic) q renderFrames;
@property (nonatomic) q decodedFrames;
@property (nonatomic) double offsetTime;
@property (nonatomic) double seekToTime;
@property (nonatomic) NSThread decodeThread;
@property (nonatomic) BOOL threadCancle;
@property (nonatomic) BOOL needReset;
@property (nonatomic) BOOL threadStopped;
@property (nonatomic) NSObject<OS_dispatch_queue> decodeQueue;
@property (nonatomic) <VEAudioDecoderProtocol> ffdecoder;
@property (nonatomic) q decoderBufferCapcity;
@property (nonatomic) VEAudioConfig latestAudioConfig;
@property (nonatomic) VECurveTransUtils curveTransUtils;
@property (nonatomic) IESMMAudioCurveConfig curveConfig;
@property (nonatomic) double lastVideoTime;
@property (nonatomic) double lastPlayTime;
@property (nonatomic) double maxRenderTime;
@property (nonatomic) double minRenderTime;
@property (nonatomic) @? seekCompletion;
@property (nonatomic) BOOL logFirstDecodedData;
@property (nonatomic) BOOL needInitReader;
@property (nonatomic) @? audioVolumnKeyFrameCallback;
@property (nonatomic) NSLock renderQueueLock;
@property (nonatomic) NSInteger readerStatus;
@property (nonatomic) VEAudioConfig audioConfig;
- (id)curveTransUtils;
- (BOOL)p_prepareDecodeResoureWithMode:;
- (id)renderQueueLock;
- (void)setAudioConfig:;
- (void)setAudioVolumnKeyFrameCallback:;
- (void)setDecodeQueue:;
- (void)setRenderQueue:;
- (void)resetReaderWithTime:completion:;
- (void)setAudioOutput:;
- (void)setCurveConfig:;
- (BOOL)assetReaderRenderData:;
- (id)audioConfig;
- (id)audioConverter;
- (id)audioVolumnKeyFrameCallback;
- (void)closeTestFile;
- (id)converterAudioBuffer;
- (int)converterNumberFrames;
- (id)currentAVAsset;
- (double)currentDecodeTime;
- (id)curveConfig;
- (id)decodeBufferList;
- (id)decodeQueue;
- (id)decodeThread;
- (long long)decodedFrames;
- (long long)decoderBufferCapcity;
- (void)dequeue:offset:dataSize:;
- (id)effectUnit;
- (BOOL)endOfFile;
- (void)enqueue:dataSize:;
- (id)ffdecoder;
- (unsigned int)filterProcess:;
- (unsigned int)filterProcessByTE:;
- (double)getCurrentVolumnAtPts:;
- (void)initAVAssetReader:audioConfig:;
- (void)initConvertWithASBD:;
- (id)initWithAVAsset:audioConfig:;
- (double)lastPlayTime;
- (double)lastVideoTime;
- (id)latestAudioConfig;
- (BOOL)logFirstDecodedData;
- (double)maxRenderTime;
- (double)minRenderTime;
- (BOOL)needInitReader;
- (BOOL)needReset;
- (void)p_calculateRenderLimits;
- (id)p_getCurveConfig:;
- (void)p_initReaderIfNeed;
- (float)p_updateAvgRatio:;
- (void)readData:numberFrames:atTime:;
- (void)readDataAndProcess;
- (void)readDataWithResample:numberFrames:;
- (void)readNextAudioBufferList:;
- (int)readerStatus;
- (void)refreshAudioConfig;
- (long long)renderFrames;
- (id)renderQueue;
- (id)resampleUnit;
- (void)resetAVAssetReader;
- (void)resetReaderWithTime:;
- (void)resetRenderQueue;
- (void)seekAssetReaderToTime:;
- (id)seekCompletion;
- (void)setAudioConverter:;
- (void)setConverterAudioBuffer:;
- (void)setConverterNumberFrames:;
- (void)setCurveTransUtils:;
- (void)setDecodeBufferList:;
- (void)setDecodeThread:;
- (void)setDecodedFrames:;
- (void)setDecoderBufferCapcity:;
- (void)setEffectUnit:;
- (void)setEndOfFile:;
- (void)setFfdecoder:;
- (void)setLastPlayTime:;
- (void)setLastVideoTime:;
- (void)setLatestAudioConfig:;
- (void)setLogFirstDecodedData:;
- (void)setMaxRenderTime:;
- (void)setMinRenderTime:;
- (void)setNeedInitReader:;
- (void)setNeedReset:;
- (void)setReaderStatus:;
- (void)setRenderFrames:;
- (void)setRenderQueueLock:;
- (void)setResampleUnit:;
- (void)setSeekCompletion:;
- (void)setThreadCancle:;
- (void)setThreadStopped:;
- (void)setupTEProcessorWithTEReaderUnit:;
- (void)startDecode;
- (void)stopAsyncWithCompletion:;
- (void)stopSync;
- (BOOL)stopSync2;
- (BOOL)threadCancle;
- (BOOL)threadStopped;
- (void)updateAudioConfig:discardDecodedBuffer:;
- (void)updateTestFile;
- (long long)channels;
- (void)seekToTime:;
- (double)seekToTime;
- (void)dealloc;
- (void)setSeekToTime:;
- (double)sampleRate;
- (id)asset;
- (void).cxx_destruct;
- (void)setChannels:;
- (double)currentTime;
- (void)setAsset:;
- (id)audioOutput;
- (void)setSampleRate:;
- (double)offsetTime;
- (void)setOffsetTime:;
- (id)assetReader;
- (void)setAssetReader:;
- (void)resetReader;
- (void)stopReader;
- (void)threadFunc;
@end
