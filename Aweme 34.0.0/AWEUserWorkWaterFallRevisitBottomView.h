@interface AWEUserWorkWaterFallRevisitBottomView : UIView
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UIImageView authorAvatarIconView;
@property (nonatomic) UIImageView rightActionIcon;
@property (nonatomic) UIButton rightActionButton;
@property (nonatomic) @? rightTapActionBlock;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (void)setRightTapActionBlock:;
- (id)authorAvatarIconView;
- (id)rightTapActionBlock;
- (void)rightActionButtonTapped:;
- (void)setAuthorAvatarIconView:;
- (id)rightActionIcon;
- (void)setRightActionIcon:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateWithModel:;
- (id)rightActionButton;
- (void)setRightActionButton:;
@end
