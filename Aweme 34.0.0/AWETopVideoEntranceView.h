@interface AWETopVideoEntranceView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString title;
- (id)initWithTitle:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
- (void)setupSubviews;
- (void)updateTitle:;
@end
