@interface AWEPOIDetailRateGradeView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel gradeLabel;
@property (nonatomic) AWEPOITagRateGradeModel tagModel;
@property (nonatomic) @? onSelect;
- (void)setOnSelect:;
- (void)setTagModel:;
- (id)tagModel;
- (void)updateWithTag:;
- (void)setGradeLabel:;
- (id)gradeLabel;
- (void)invalidateIntrinsicContentSize;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (id)iconImageView;
- (void)onTap;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
- (id)onSelect;
@end
