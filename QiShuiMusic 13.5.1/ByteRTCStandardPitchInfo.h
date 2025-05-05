@interface ByteRTCStandardPitchInfo : NSObject
@property (nonatomic) NSInteger startTime;
@property (nonatomic) NSInteger duration;
@property (nonatomic) NSInteger pitch;
- (void)setPitch:;
- (void)setStartTime:;
- (int)pitch;
- (int)startTime;
- (void)setDuration:;
- (int)duration;
@end
