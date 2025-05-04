@interface AWEHomepageTopBarTabInfo : NSObject
@property (nonatomic) q index;
@property (nonatomic) q order;
@property (nonatomic) q orderAlignMainTab;
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString leafTabID;
@property (nonatomic) BOOL isLandTab;
@property (nonatomic) BOOL isMainTab;
@property (nonatomic) AWEHomepageTopBarTabItemInfo itemInfo;
- (void)setTabID:;
- (id)leafTabID;
- (void)setItemInfo:;
- (long long)orderAlignMainTab;
- (void)setOrderAlignMainTab:;
- (void)setLeafTabID:;
- (BOOL)isLandTab;
- (void)setIsLandTab:;
- (BOOL)isMainTab;
- (void)setIsMainTab:;
- (void)setIndex:;
- (long long)index;
- (long long)order;
- (id)itemInfo;
- (void).cxx_destruct;
- (void)setOrder:;
- (id)tabID;
@end
