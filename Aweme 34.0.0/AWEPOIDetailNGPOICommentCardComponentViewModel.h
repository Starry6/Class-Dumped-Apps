@interface AWEPOIDetailNGPOICommentCardComponentViewModel : DitoComponentViewModel
@property (nonatomic) BOOL isClose;
@property (nonatomic) BOOL showCommentBar;
@property (nonatomic) AWEPOIDetailInfoRateCardCellViewModel bizViewModel;
- (BOOL)isClose;
- (void)setIsClose:;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)didLoadPageModel:;
- (void)componentViewWillShow;
- (id)bizViewModel;
- (void)setBizViewModel:;
- (void)setupBizViewModel;
- (BOOL)showCommentBar;
- (void)setShowCommentBar:;
- (id)initWithNode:;
- (void).cxx_destruct;
@end
