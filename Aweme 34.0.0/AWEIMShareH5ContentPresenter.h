@interface AWEIMShareH5ContentPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUIImageViewPresenter backgroundImage;
@property (nonatomic) AWEIMUIGradientViewPresenter gradient;
@property (nonatomic) AWEIMSmallCardPresenter smallCard;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (id)smallCard;
- (void)setSmallCard:;
- (id)backgroundImage;
- (void)setGradient:;
- (id)gradient;
- (void)setBackgroundImage:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
