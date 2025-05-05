@interface LSLiveNoiseSuppressionV2 : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initModelVecWithPath:;
- (void)initNNBlockWithSampleRate:numChannels:modelPath:;
- (id)initWithSample:channels:useSingleChannel:resourceUrl:;
- (void)processBufferList:inNumberFrames:;
- (void)setParams:param2:param3:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
