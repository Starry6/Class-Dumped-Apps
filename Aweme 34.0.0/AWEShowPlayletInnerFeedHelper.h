@interface AWEShowPlayletInnerFeedHelper : NSObject
@property (nonatomic) AWEDiscoverDPlayletTableViewController<AWEDiscoverDPlayletPanelDelegate> currentInnerFeedVC;
- (void)setCurrentInnerFeedVC:;
- (id)currentInnerFeedVC;
- (void).cxx_destruct;
+ (id)sharedHelper;
@end
