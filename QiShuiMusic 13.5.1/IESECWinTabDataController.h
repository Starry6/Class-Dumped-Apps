@interface IESECWinTabDataController : NSObject
+ (void)configWithExtensionCardResponse:withTabType:categoryID:context:;
+ (id)configTabApiWithContext:tabList:;
+ (void)configWithTabBFFResponse:context:hybridListModel:;
+ (void)configWithTabResponse:context:tab:;
+ (void)fetchExtensionCardWithModel:context:tabList:;
+ (void)reloadTabDataWithContext:tab:completion:;
+ (void)requestOrderStatusWithContext:;
+ (void)requestTabListWithTabList:loadMore:context:completion:;
+ (void)setExtensionCardRequestOnAir:withTabType:categoryID:context:;
@end
