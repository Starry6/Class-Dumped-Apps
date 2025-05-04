@interface AWEFavoriteSubTabListTracker : NSObject
@property (nonatomic) AWEFavoriteTabListDataContext dataContext;
@property (nonatomic) NSMutableSet hasShowTrackedSecondTabSet;
@property (nonatomic) NSArray lastExposeArray;
@property (nonatomic) BOOL hasReportSubItems;
- (id)dataContext;
- (void)setDataContext:;
- (void)trackItemSelectWithItemModel:selectedType:extraInfo:;
- (void)trackVisibleItemsWithItemModels:indexs:;
- (void)trackExposeItemWithItemModel:index:exposeType:;
- (void)trackLayoutItemsWithItemModels:;
- (id)hasShowTrackedSecondTabSet;
- (id)lastExposeArray;
- (void)setLastExposeArray:;
- (BOOL)hasReportSubItems;
- (void)setHasReportSubItems:;
- (void)setHasShowTrackedSecondTabSet:;
- (void).cxx_destruct;
+ (id)trackerWithDataContext:;
@end
