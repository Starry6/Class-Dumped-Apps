@interface AWEIMMessageCombineSharePresenter : AWEIMGestureUIViewPresenter
@property (nonatomic) AWEIMYYLabelPresenter titlePresenter;
@property (nonatomic) AWEIMYYLabelPresenter contentPresenter;
@property (nonatomic) AWEIMUIViewPresenter linePresenter;
@property (nonatomic) AWEIMYYLabelPresenter messageCountPresenter;
- (void)didReceiveProps:;
- (id)titlePresenter;
- (void)setTitlePresenter:;
- (id)linePresenter;
- (id)messageCountPresenter;
- (id)imageDisplayAttributedStringForProps:;
- (void)setLinePresenter:;
- (void)setMessageCountPresenter:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)contentPresenter;
- (void)setContentPresenter:;
@end
