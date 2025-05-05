@interface WK_RTCVideoEncoderH265 : NSObject
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
- (void)configureCompressionSession;
- (void)destroyCompressionSession;
- (int)resetCompressionSession;
- (void)setBitrateBps:;
- (void)setEncoderBitrateBps:;
- (void)frameWasEncoded:flags:sampleBuffer:width:height:renderTimeMs:timestamp:rotation:;
@end
