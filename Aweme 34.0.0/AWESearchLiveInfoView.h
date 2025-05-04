@interface AWESearchLiveInfoView : UIView
@property (nonatomic) AWEVideoTagModel tagModel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView iconImg;
- (id)iconImg;
- (void)setIconImg:;
- (void)setTagModel:;
- (id)tagModel;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateModel:;
@end
