@interface AWEDitoPOIFavoriteListCellComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEDitoPOIFavoritePageContext context;
@property (nonatomic) AWEDitoPOIFavoriteListCellComponentView cell;
@property (nonatomic) AWEPOISimpleListInfo listInfo;
@property (nonatomic) NSString collectTime;
@property (nonatomic) NSString cornerText;
@property (nonatomic) NSString btmString;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (id)collectTime;
- (id)cornerText;
- (id)trackParamsForAutoTrackWithEventName:params:;
- (id)btmString;
- (void)setCollectTime:;
- (void)setBtmString:;
- (void)setCornerText:;
- (id)listInfo;
- (void)setListInfo:;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
@end
