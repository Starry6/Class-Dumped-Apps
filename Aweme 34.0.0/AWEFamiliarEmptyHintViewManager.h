@interface AWEFamiliarEmptyHintViewManager : NSObject
@property (nonatomic) UIViewController familiarEmptyViewController;
@property (nonatomic) AWEFamiliarEmptyHintViewController familiarEmptyViewControllerOld;
@property (nonatomic) BOOL hasViewLoaded;
@property (nonatomic) UIViewController<AWEFindFriendsViewControllerProtocol> findViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)refreshStateOfFamiliarEmptyHintViewController;
- (void)removeFamiliarEmptyHintViewController;
- (id)familiarEmptyViewController;
- (void)addFamiliarEmptyHintViewControllerToParentViewController:;
- (id)findViewController;
- (id)familiarEmptyViewControllerOld;
- (void)updateFamiliarEmptyHintViewControllerWith:dataController:parentVC:;
- (BOOL)refreshStateOfFamiliarEmptyHintViewControllerWith:;
- (void)setFamiliarEmptyViewController:;
- (void)setFamiliarEmptyViewControllerOld:;
- (BOOL)hasViewLoaded;
- (void)setHasViewLoaded:;
- (void)setFindViewController:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
