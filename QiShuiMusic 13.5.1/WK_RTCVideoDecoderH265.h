@interface WK_RTCVideoDecoderH265 : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCallback:;
- (id)init;
- (void)dealloc;
- (void)setError:;
- (void).cxx_destruct;
- (void)setVideoFormat:;
- (long long)startDecodeWithNumberOfCores:;
- (long long)releaseDecoder;
- (long long)decode:missingFrames:codecSpecificInfo:renderTimeMs:;
- (id)implementationName;
- (long long)decodeData:size:timeStamp:;
- (int)resetDecompressionSession;
- (void)configureDecompressionSession;
- (void)destroyDecompressionSession;
@end
