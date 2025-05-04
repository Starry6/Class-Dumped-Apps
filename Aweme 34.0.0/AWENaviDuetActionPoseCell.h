@interface AWENaviDuetActionPoseCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView cornerIconImageView;
@property (nonatomic) BOOL selectedCell;
@property (nonatomic) AWENaviDuetActionPoseModel actionPose;
- (id)cornerIconImageView;
- (void)resetCornerImageView;
- (void)onShadowApply:;
- (id)actionPose;
- (BOOL)isSelectedCell;
- (void)setActionPose:;
- (void)showNewCornerIcon;
- (void)setCornerIconImageView:;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNameLabel:;
- (void)setupSubviews;
- (void)setSelectedCell:;
@end
