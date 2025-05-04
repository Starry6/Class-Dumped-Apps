@interface AWEMusicDetailHeaderCountDownLabel : UILabel
@property (nonatomic) double duration;
@property (nonatomic) double startTime;
- (void)updatePlayProgressTime:;
- (void)setStartTime:;
- (void)setDuration:;
- (id)initWithFrame:;
- (void)setUp;
- (double)duration;
- (double)startTime;
@end
