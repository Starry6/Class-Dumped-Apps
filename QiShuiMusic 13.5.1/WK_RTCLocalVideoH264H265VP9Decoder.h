@interface WK_RTCLocalVideoH264H265VP9Decoder : NSObject
- (void).cxx_destruct;
- (void)setWidth:height:;
- (long long)releaseDecoder;
- (long long)decodeData:size:timeStamp:;
- (id)initH264DecoderWithCallback:;
- (id)initH265DecoderWithCallback:;
- (id)initVP9DecoderWithCallback:;
@end
