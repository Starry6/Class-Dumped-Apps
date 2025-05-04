@interface AWEDitoPOIFavoriteStatusComponentViewModel : DitoComponentViewModel
@property (nonatomic) BOOL showFeedStatus;
@property (nonatomic) AWEDitoPOIFavoriteStatusComponentView cell;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)setShowFeedStatus:;
- (BOOL)showFeedStatus;
- (double)componentHeightWithState;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
@end
