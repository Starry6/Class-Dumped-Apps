@interface AWEHotSearchProgressDotView : UIView
@property (nonatomic) q targetIndex;
@property (nonatomic) q index;
@property (nonatomic) AWEHotSearchProgressView progressView;
- (void)updateDotViewState;
- (id)currentStateArray;
- (id)initWithIndex:progressView:;
- (void)changeStateWithAnimation:isScrollUp:isChangeState:;
- (void)setIndex:;
- (long long)index;
- (long long)targetIndex;
- (id)progressView;
- (void)setProgressView:;
- (void)setTargetIndex:;
- (void).cxx_destruct;
@end
