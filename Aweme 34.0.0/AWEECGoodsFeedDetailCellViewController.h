@interface AWEECGoodsFeedDetailCellViewController : AWEAwemeDetailCellViewController
@property (nonatomic) UIView<AWEECGoodsFeedProductCardViewProtocol> cell;
@property (nonatomic) BOOL isFirstCardFullScreen;
@property (nonatomic) @ immersiveGoodsCardDelegate;
@property (nonatomic) q maxUserScorllIndex;
- (void)updateCurrentAwemeModel:;
- (long long)maxUserScorllIndex;
- (id)immersiveGoodsCardDelegate;
- (BOOL)isFirstCardFullScreen;
- (void)setIsFirstCardFullScreen:;
- (void)updateFirstCardPanPercent:;
- (void)setImmersiveGoodsCardDelegate:;
- (void)setMaxUserScorllIndex:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
- (void)configureWithModel:;
- (void)willDisplay;
@end
