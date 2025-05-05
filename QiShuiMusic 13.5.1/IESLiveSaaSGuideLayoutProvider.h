@interface IESLiveSaaSGuideLayoutProvider : NSObject
@property (nonatomic) NSMapTable viewTable;
@property (nonatomic) NSMapTable controlViewTable;
@property (nonatomic) UIViewController rootViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addView:withViewType:;
- (id)controlViewTable;
- (void)insertControlView:atIndex:;
- (void)relayoutControlViews;
- (void)removeControlViewAtIndex:;
- (void)removeViewWithType:;
- (void)setControlViewTable:;
- (void)setViewTable:;
- (id)sortedControlViews;
- (id)viewOfType:;
- (id)viewTable;
- (void)setRootViewController:;
- (id)rootViewController;
- (id)initWithRootViewController:;
- (void).cxx_destruct;
@end
