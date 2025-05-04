@interface AWEPOIDetailNGUgcQAComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) AWEPOIDetailNGUgcQAComponentView componentView;
@property (nonatomic) AWEPOIFeedUgcQAEntranceInfoModel info;
@property (nonatomic) NSNumber bottomMargin;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)pageView:didScroll:;
- (BOOL)canFloatingQAButton;
- (id)initWithNode:;
- (void)setInfo:;
- (id)info;
- (void)parseData:;
- (id)bottomMargin;
- (void).cxx_destruct;
- (id)componentView;
- (void)setComponentView:;
- (void)setBottomMargin:;
+ (BOOL)didReachBottomWithScrollView:;
@end
