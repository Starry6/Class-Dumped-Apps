@interface AWEGCPDetailAlbumBadgeView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel textLabel;
- (void)updateWithIndex:count:;
- (id)textLabel;
- (id)icon;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)layoutView;
- (void)setTextLabel:;
- (void)setupView;
@end
