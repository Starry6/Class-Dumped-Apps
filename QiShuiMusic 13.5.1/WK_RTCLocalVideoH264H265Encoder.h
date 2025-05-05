@interface WK_RTCLocalVideoH264H265Encoder : NSObject
- (void)setCallback:;
- (void)setLowLatency:;
- (void).cxx_destruct;
- (int)codecType;
- (long long)startEncodeWithSettings:numberOfCores:;
- (long long)releaseEncoder;
- (long long)encode:codecSpecificInfo:frameTypes:;
- (int)setBitrate:framerate:;
- (id)initWithCodecInfo:;
@end
