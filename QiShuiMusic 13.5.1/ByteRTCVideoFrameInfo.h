@interface ByteRTCVideoFrameInfo : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q rotation;
- (void)setWidth:;
- (void)setRotation:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (long long)rotation;
@end
