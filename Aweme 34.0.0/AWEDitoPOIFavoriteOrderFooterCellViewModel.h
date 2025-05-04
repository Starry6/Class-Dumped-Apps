@interface AWEDitoPOIFavoriteOrderFooterCellViewModel : DitoComponentViewModel
@property (nonatomic) AWEDitoPOIFavoritePageContext context;
@property (nonatomic) NSDictionary itemModel;
@property (nonatomic) NSString text;
@property (nonatomic) NSString url;
- (id)itemModel;
- (void)setItemModel:;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (id)trackParamsForAutoTrackWithEventName:params:;
- (id)initWithNode:;
- (void)trackEvent:;
- (void)setUrl:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)url;
- (void)handleTap;
@end
