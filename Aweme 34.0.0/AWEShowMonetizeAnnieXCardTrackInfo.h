@interface AWEShowMonetizeAnnieXCardTrackInfo : NSObject
@property (nonatomic) double willLoadTime;
@property (nonatomic) double didFinishLoadTime;
@property (nonatomic) double loadEndTime;
@property (nonatomic) BOOL finished;
- (void)setLoadEndTime:;
- (double)loadEndTime;
- (double)willLoadTime;
- (void)setWillLoadTime:;
- (double)didFinishLoadTime;
- (void)setDidFinishLoadTime:;
- (BOOL)isFinished;
@end
