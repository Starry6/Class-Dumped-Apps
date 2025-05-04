@interface AWENearbyFeedbackDetailController : UIViewController
@property (nonatomic) YYLabel detailTextLabel;
@property (nonatomic) AWENearbyFeedbackTopBar topBar;
@property (nonatomic) AWENearbyFeedbackItemDetail detailInfo;
@property (nonatomic) @? closeActionBlock;
- (id)detailInfo;
- (void)setDetailInfo:;
- (void)configViews;
- (void)configTopBar;
- (void)onTapRightButton:;
- (id)closeActionBlock;
- (void)setCloseActionBlock:;
- (void)onTapLeftButton:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)topBar;
- (void)setTopBar:;
- (id)detailTextLabel;
- (void)setDetailTextLabel:;
@end
