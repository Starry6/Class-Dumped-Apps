@interface AWEHomePageContext : NSObject
@property (nonatomic) AWEHomePageContextTabNode rootTabNode;
- (id)selectedTabIds;
- (BOOL)isSelectedWithTabId:;
- (id)rootTabNode;
- (void)setRootTabNode:;
- (id)homepageTabNode;
- (id)getCurrentSelectBottomTabId;
- (BOOL)isInBottomTabWithTabId:;
- (BOOL)hasTabWithTabId:;
- (id)getTabNodeWithTabId:;
- (void).cxx_destruct;
+ (id)getTabNodeWithRootNode:tabId:;
@end
