@interface AWENewPublishAnchorDetailView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView anchorIconView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) @? deleteDidClickBlock;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)anchorIconView;
- (id)deleteDidClickBlock;
- (void)deleteDidClicked:;
- (void)updateTagLabel:;
- (void)setupUserInteractionEnabled:;
- (void)setAnchorIconView:;
- (void)setDeleteDidClickBlock:;
- (id)init;
- (void)setDeleteButton:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (id)deleteButton;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)separatorLine;
- (void)setSeparatorLine:;
- (void)updateAccessibilityLabel;
@end
