@interface ByteRTCFrameUpdateInfo : NSObject
@property (nonatomic) NSInteger pixel;
@property (nonatomic) NSInteger framerate;
- (id)init;
- (int)framerate;
- (void)setFramerate:;
- (int)pixel;
- (void)setPixel:;
@end
