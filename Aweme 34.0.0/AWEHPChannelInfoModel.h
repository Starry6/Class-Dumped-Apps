@interface AWEHPChannelInfoModel : NSObject
@property (nonatomic) NSString tabId;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString title;
@property (nonatomic) q index;
@property (nonatomic) NSString parentTabId;
@property (nonatomic) q topBarShowIndex;
@property (nonatomic) NSString topBarShowTabId;
@property (nonatomic) BOOL isTopTabSelected;
@property (nonatomic) q bottomBarShowIndex;
@property (nonatomic) NSString bottomBarShowTabId;
@property (nonatomic) BOOL isBottomTabSelected;
- (id)referString;
- (void)setReferString:;
- (void)setParentTabId:;
- (void)setBottomBarShowTabId:;
- (void)setBottomBarShowIndex:;
- (void)setIsBottomTabSelected:;
- (id)bottomBarShowTabId;
- (id)parentTabId;
- (long long)bottomBarShowIndex;
- (BOOL)isTopTabSelected;
- (BOOL)isBottomTabSelected;
- (long long)topBarShowIndex;
- (void)setIsTopTabSelected:;
- (void)setTopBarShowIndex:;
- (id)topBarShowTabId;
- (void)setTopBarShowTabId:;
- (void)setIndex:;
- (long long)index;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTabId:;
- (id)tabId;
@end
