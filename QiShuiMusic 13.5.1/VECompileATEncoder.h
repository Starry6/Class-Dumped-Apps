@interface VECompileATEncoder : IESMMObject
@property (nonatomic) double duration;
@property (nonatomic) double currentTime;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} destinationFormat;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} sourceFormat;
@property (nonatomic) Q status;
- (unsigned long long)copyPCMSamplesIntoBuffer:;
- (int)encodeAudioFrame:toAudioBuf:;
- (id)getAudioClassDescriptionWithType:fromManufacturer:;
- (BOOL)initEncoderWithInFormat;
- (id)initWithInFormat:outFormat:;
- (void)setCurrentTime:;
- (void)dealloc;
- (void)setDuration:;
- (double)currentTime;
- (unsigned long long)status;
- (double)duration;
- (BOOL)setExtraData:;
- (id)sourceFormat;
- (id)destinationFormat;
@end
