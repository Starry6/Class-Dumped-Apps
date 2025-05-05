@interface VCAudioPayload : NSObject
@property (nonatomic) VCAudioPayloadConfig config;
@property (nonatomic) I bitrate;
@property (nonatomic) NSInteger bandwidth;
- (void)dealloc;
- (id)initWithConfig:;
- (int)bandwidth;
- (unsigned int)bitrate;
- (id)description;
- (id)config;
- (BOOL)setBitrate:;
- (BOOL)setBandwidth:;
- (void)setCurrentDTXEnable:;
- (BOOL)isDTXEmptyPacket:;
- (BOOL)createEncoderWithInputFormat:;
- (int)encodeAudio:numInputSamples:outputBytes:numOutputBytes:;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:numBytes:;
- (BOOL)setCodecModeRequest:;
- (BOOL)getMagicCookie:withLength:;
@end
