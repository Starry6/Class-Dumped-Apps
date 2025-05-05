@interface ByteRTCRemoteVideoConfig : NSObject
@property (nonatomic) NSInteger framerate;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
- (void)setWidth:;
- (int)framerate;
- (int)height;
- (int)width;
- (void)setHeight:;
- (void)setFramerate:;
@end
