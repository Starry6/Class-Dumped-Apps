@interface AWESearchAlbumBadge : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) MASConstraint labelToContainerLeft;
@property (nonatomic) MASConstraint labelToIconLeft;
- (void)updateWithIndex:model:;
- (void)setLabelToIconLeft:;
- (void)setLabelToContainerLeft:;
- (id)labelToIconLeft;
- (id)labelToContainerLeft;
- (id)textLabel;
- (id)init;
- (id)icon;
- (id)containerView;
- (void)setContainerView:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
@end
