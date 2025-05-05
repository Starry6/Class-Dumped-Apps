@interface ByteRTCSourceWantedData : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q frameRate;
- (void)setFrameRate:;
- (long long)frameRate;
- (void)setWidth:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
@end
