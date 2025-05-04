@interface AWEStickerPickerFootView : MJRefreshAutoFooter
@property (nonatomic) UIView<ACCLoadingViewProtocol> loading;
@property (nonatomic) UILabel stateLabel;
@property (nonatomic) {CGPoint=dd} elementsOffset;
- (void)placeSubviews;
- (void)scrollViewPanStateDidChange:;
- (void)stateLabelClick;
- (void)endRefreshingWithNetWorkError;
- (void)setElementsOffset:;
- (id)elementsOffset;
- (void)willMoveToSuperview:;
- (void)prepare;
- (void).cxx_destruct;
- (id)loading;
- (void)setState:;
- (void)setLoading:;
- (void)setStateLabel:;
- (id)stateLabel;
@end
