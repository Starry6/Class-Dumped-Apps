@interface AWEEntertainmentVideoHavePermissionTagView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel havePermissionLabel;
- (void)setHavePermissionLabel:;
- (id)havePermissionLabel;
- (void)updateTagText:;
- (void)updateTagTextColor:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateBackgroundColor:;
@end
