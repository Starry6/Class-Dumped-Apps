@interface LCAudioScoreMidiDrawingData : NSObject
@property (nonatomic) NSInteger pitch;
@property (nonatomic) NSInteger start;
@property (nonatomic) NSInteger duration;
- (void)setStart:;
- (void)setPitch:;
- (int)start;
- (int)pitch;
- (void)setDuration:;
- (int)duration;
@end
