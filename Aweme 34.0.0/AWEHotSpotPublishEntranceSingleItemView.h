@interface AWEHotSpotPublishEntranceSingleItemView : AWEHotSpotPublishEntranceBaseView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel text;
@property (nonatomic) q viewType;
- (void)onDiscussClicked;
- (void)onShotClicked;
- (id)icon;
- (void)setText:;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)initWithType:;
- (long long)viewType;
- (void)setupUI;
- (void)setViewType:;
@end
