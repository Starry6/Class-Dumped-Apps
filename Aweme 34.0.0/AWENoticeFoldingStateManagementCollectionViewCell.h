@interface AWENoticeFoldingStateManagementCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMNoticeFoldStructModel model;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel foldingStateLabel;
@property (nonatomic) UIImageView arrowView;
- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (id)foldingStateLabel;
- (void)p_configFoldingStateLabel;
- (void)cofigWithModel:;
- (void)setFoldingStateLabel:;
- (void)setModel:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setNameLabel:;
- (int)avatarWidth;
@end
