@interface WK_RTCVideoEncoderH264 : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCallback:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)implementationName;
- (long long)startEncodeWithSettings:numberOfCores:;
- (long long)releaseEncoder;
- (long long)encode:codecSpecificInfo:frameTypes:;
- (int)setBitrate:framerate:;
- (id)scalingSettings;
- (id)initWithCodecInfo:;
- (void)setH264LowLatencyEncoderEnabled:;
- (BOOL)hasCompressionSession;
- (unsigned int)pixelFormatOfFrame:;
- (BOOL)resetCompressionSessionIfNeededWithFrame:;
- (int)resetCompressionSessionWithPixelFormat:;
- (void)configureCompressionSession;
- (void)destroyCompressionSession;
- (void)setBitrateBps:frameRate:;
- (void)setEncoderBitrateBps:frameRate:;
- (void)updateBitRateAccordingActualFrameRate;
- (void)frameWasEncoded:flags:sampleBuffer:codecSpecificInfo:width:height:renderTimeMs:timestamp:rotation:isKeyFrameRequired:;
@end
