@interface AWEDitoPOIFavoriteLabelsComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEDitoPOIFavoritePageContext context;
@property (nonatomic) AWEDitoPOIFavoriteLabelsComponentView cell;
@property (nonatomic) AWEDitoPOIFavoriteLabelsDataModel data;
@property (nonatomic) double currentBackgroundColorAlpha;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)pageView:didScroll:;
- (double)currentBackgroundColorAlpha;
- (void)setCurrentBackgroundColorAlpha:;
- (id)dataModelWithNode:;
- (id)initWithNode:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)cell;
- (void)setCell:;
@end
