@interface WK_RTCVideoFrame : NSObject
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) q rotation;
@property (nonatomic) q timeStampNs;
@property (nonatomic) NSInteger timeStamp;
@property (nonatomic) <RTCVideoFrameBuffer> buffer;
- (id)buffer;
- (int)height;
- (int)width;
- (void).cxx_destruct;
- (int)timeStamp;
- (long long)rotation;
- (void)setTimeStamp:;
- (long long)timeStampNs;
- (id)newI420VideoFrame;
- (id)initWithPixelBuffer:rotation:timeStampNs:;
- (id)initWithPixelBuffer:scaledWidth:scaledHeight:cropWidth:cropHeight:cropX:cropY:rotation:timeStampNs:;
- (id)initWithBuffer:rotation:timeStampNs:;
@end
