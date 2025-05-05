@interface IESECShopTopTabService : NSObject
@property (nonatomic) BOOL shouldHideTopTab;
@property (nonatomic) NSArray topTabsModels;
@property (nonatomic) NSString lightStyleTextColor;
@property (nonatomic) NSString indicatorColor;
@property (nonatomic) BOOL topTabBarPinned;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)topTabBarPinned;
- (id)lightStyleTextColor;
- (void)setLightStyleTextColor:;
- (void)setTopTabBarPinned:;
- (void)setTopTabsModels:;
- (BOOL)shouldHideTopTab;
- (id)topTabsModels;
- (id)indicatorColor;
- (void).cxx_destruct;
- (void)setIndicatorColor:;
@end
