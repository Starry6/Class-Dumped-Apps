@interface AWEDiscoverDPlayletPanelTabModel : NSObject
@property (nonatomic) NSString tabName;
@property (nonatomic) UIViewController subController;
@property (nonatomic) q tabIndex;
@property (nonatomic) DUXTabBarTextItem tabTextItem;
@property (nonatomic) NSString trackerTabName;
- (id)subController;
- (void)setSubController:;
- (id)tabTextItem;
- (void)setTabTextItem:;
- (id)trackerTabName;
- (void)setTrackerTabName:;
- (long long)tabIndex;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
- (void)setTabIndex:;
@end
