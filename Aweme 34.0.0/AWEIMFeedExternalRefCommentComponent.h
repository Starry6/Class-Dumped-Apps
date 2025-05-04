@interface AWEIMFeedExternalRefCommentComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMUILabelPresenter commentLabelPresenter;
- (void)componentDidMounted:;
- (void)setCommentLabelPresenter:;
- (void)configCommentPresenter;
- (void)p_updateCommentLabel:message:;
- (void)updateCommentLabelWithText:contentType:message:;
- (id)commentLabelPresenter;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
