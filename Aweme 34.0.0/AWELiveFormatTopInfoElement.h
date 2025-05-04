@interface AWELiveFormatTopInfoElement : AWELiveTopElement
@property (nonatomic) AWELiveCardTopInfoView topView;
@property (nonatomic) BOOL isPortraitStream;
- (BOOL)shouldActivateElementWithData:;
- (void)p_updateConstraint;
- (void)preloadElement;
- (void)setIsPortraitStream:;
- (BOOL)isPortraitStream;
- (double)p_topOffSet;
- (id)headerLeftTagText;
- (id)secondTagTitle;
- (id)operationPlaceText;
- (long long)tagType;
- (void)viewDidLoad;
- (id)subTitle;
- (void)setData:;
- (void).cxx_destruct;
- (id)title;
- (id)topView;
- (void)setTopView:;
@end
