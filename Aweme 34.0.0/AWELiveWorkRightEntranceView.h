@interface AWELiveWorkRightEntranceView : UIView
@property (nonatomic) UILabel playBackTitle;
@property (nonatomic) UILabel dataLabel;
@property (nonatomic) UILabel playNumber;
- (void)setupDataWithModel:;
- (id)playBackTitle;
- (id)playNumber;
- (void)setPlayBackTitle:;
- (void)setPlayNumber:;
- (id)initWithModel:;
- (void)updateWithConfig:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)dataLabel;
- (void)setDataLabel:;
@end
