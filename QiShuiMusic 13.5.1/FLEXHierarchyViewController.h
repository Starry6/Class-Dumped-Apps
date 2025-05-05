@interface FLEXHierarchyViewController : FLEXNavigationController
@property (nonatomic) <FLEXHierarchyDelegate> hierarchyDelegate;
@property (nonatomic) FHSViewController snapshotViewController;
@property (nonatomic) FLEXHierarchyTableViewController treeViewController;
@property (nonatomic) Q mode;
@property (nonatomic) UIView selectedView;
- (id)initWithDelegate:viewsAtTap:selectedView:;
- (void)viewDidLoad;
- (void)pushViewController:animated:;
- (void)donePressed;
- (void)toggleHierarchyMode;
- (void)setMode:;
- (id)selectedView;
- (id)hierarchyDelegate;
- (id)snapshotViewController;
- (id)treeViewController;
- (unsigned long long)mode;
- (void).cxx_destruct;
+ (id)delegate:;
+ (id)delegate:viewsAtTap:selectedView:;
@end
