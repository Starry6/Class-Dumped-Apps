@interface AWEIMFansBottomContainer : AWEIMFansBaseContainer
@property (nonatomic) AFDUserWorkCollectionView userWorkView;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) <AFDUserWorkCollectionViewDataSource> userWorkDataSource;
- (void)configWithViewModel:;
- (id)userWorkView;
- (id)p_userWorkDataSource;
- (void)setUserWorkDataSource:;
- (id)userWorkDataSource;
- (void)setUserWorkView:;
- (void).cxx_destruct;
- (void)setupViews;
- (id)bottomLine;
- (void)setBottomLine:;
- (void)willDisplay;
@end
