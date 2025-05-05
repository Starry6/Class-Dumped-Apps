@interface WK_RTCWrappedEncodedImageBuffer : NSObject
@property (nonatomic) {scoped_refptr<webrtc::EncodedImageBufferInterface>=^{EncodedImageBufferInterface}} buffer;
- (void)setBuffer:;
- (id)buffer;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEncodedImageBuffer:;
@end
