@interface BigAVRTCVideoFrame : NSObject
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) q rotation;
@property (nonatomic) q timeStampNs;
@property (nonatomic) NSInteger timeStamp;
@property (nonatomic) <RTCVideoFrameBuffer> buffer;
- (id)initWithNativeVideoFrame:;
- (id)nativeVideoFrame;
- (id)buffer;
- (int)height;
- (int)width;
- (void).cxx_destruct;
- (int)timeStamp;
- (long long)rotation;
- (void)setTimeStamp:;
- (long long)timeStampNs;
- (id)newI420VideoFrame;
- (id)initWithBuffer:rotation:timeStampNs:;
@end
