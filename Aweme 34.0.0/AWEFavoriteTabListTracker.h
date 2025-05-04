@interface AWEFavoriteTabListTracker : NSObject
@property (nonatomic) AWEFavoriteTabListDataContext dataContext;
@property (nonatomic) NSMutableSet hasTrackedTabShowSet;
@property (nonatomic) NSArray lastExposeArray;
@property (nonatomic) BOOL hasReportSubItems;
- (id)dataContext;
- (void)setDataContext:;
- (void)trackItemSelectWithItemModel:selectedType:extraInfo:;
- (void)trackVisibleItemsWithItemModels:indexs:;
- (void)trackExposeItemWithItemModel:index:exposeType:;
- (void)trackLayoutItemsWithItemModels:;
- (id)lastExposeArray;
- (void)setLastExposeArray:;
- (BOOL)hasReportSubItems;
- (void)setHasReportSubItems:;
- (void)trackOtherPageItemSelectWithTabName:;
- (id)cacheTabTypeForTabItem:;
- (id)hasTrackedTabShowSet;
- (void)setHasTrackedTabShowSet:;
- (void).cxx_destruct;
+ (id)trackerWithDataContext:;
@end
