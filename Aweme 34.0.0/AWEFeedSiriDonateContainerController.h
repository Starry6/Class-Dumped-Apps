@interface AWEFeedSiriDonateContainerController : AWEBaseController
@property (nonatomic) BOOL canDonate;
@property (nonatomic) BOOL hasDonate;
@property (nonatomic) NSString awemeID;
@property (nonatomic) q totalTime;
@property (nonatomic) float biggerRatio;
@property (nonatomic) float lesserRatio;
- (void)setAwemeID:;
- (id)awemeID;
- (void)videoPlayer:updatePlayTime:totalTime:;
- (void)tableView:didDisplayCell:forRowAtIndexPath:;
- (void)setHasDonate:;
- (BOOL)hasDonate;
- (void)setBiggerRatio:;
- (void)setLesserRatio:;
- (void)setCanDonate:;
- (BOOL)canDonate;
- (float)biggerRatio;
- (float)lesserRatio;
- (long long)totalTime;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setTotalTime:;
@end
