@interface WK_RTCWrappedNativeVideoEncoder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCallback:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)implementationName;
- (long long)startEncodeWithSettings:numberOfCores:;
- (long long)releaseEncoder;
- (long long)encode:codecSpecificInfo:frameTypes:;
- (int)setBitrate:framerate:;
- (id)scalingSettings;
- (id)initWithNativeEncoder:;
- (id)releaseWrappedEncoder;
@end
