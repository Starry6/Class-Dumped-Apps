@interface CJPayResultDetailItemView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView unfoldArrow;
@property (nonatomic) BOOL needScaleFont;
- (void)setUnfoldArrow:;
- (void)updateWithTitle:detail:iconUrl:;
- (void)updateFoldViewWithTitle:detail:;
- (BOOL)needScaleFont;
- (void)p_setupUI;
- (void)setNeedScaleFont:;
- (id)unfoldArrow;
- (void)updateWithTitle:detail:;
- (id)init;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
