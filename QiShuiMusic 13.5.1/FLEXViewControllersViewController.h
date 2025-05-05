@interface FLEXViewControllersViewController : FLEXFilteringTableViewController
@property (nonatomic) FLEXMutableListSection section;
@property (nonatomic) NSArray controllers;
- (id)initWithViews:;
- (void)viewDidLoad;
- (id)makeSections;
- (void)dismissAnimated;
- (id)section;
- (id)controllers;
- (void).cxx_destruct;
+ (id)controllersForViews:;
@end
