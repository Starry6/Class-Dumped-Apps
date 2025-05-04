@interface AWEIMUIViewPresenter : AWEIMFlexPresenter
@property (nonatomic) AWEIMUIViewPresenterProps props;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)didReceiveProps:;
- (void)updateView:withProps:;
- (id)props;
- (void).cxx_destruct;
- (void)hidden:;
- (void)setProps:;
@end
