@interface AWECommentRecorderCustomUIComponent : ACCFeatureComponent
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
- (id)repliedUserModel;
- (void)componentDidMount;
- (void)setBackgroundView:;
- (id)displayedText;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
@end
