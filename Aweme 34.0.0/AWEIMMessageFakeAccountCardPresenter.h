@interface AWEIMMessageFakeAccountCardPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUIImageViewPresenter fakeAvatar;
@property (nonatomic) AWEIMUIViewPresenter fakeNameBox;
@property (nonatomic) AWEIMUIViewPresenter fakeIntroBox;
@property (nonatomic) AWEIMUIViewPresenter fakeSecondIntroBox;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)didReceiveProps:;
- (void)updateSubpresenterProps;
- (id)fakeAvatar;
- (id)fakeNameBox;
- (id)fakeIntroBox;
- (id)fakeSecondIntroBox;
- (void)setFakeAvatar:;
- (void)setFakeNameBox:;
- (void)setFakeIntroBox:;
- (void)setFakeSecondIntroBox:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
