@interface FLEXObjcRuntimeViewController : FLEXTableViewController
@property (nonatomic) FLEXKeyPathSearchController keyPathController;
@property (nonatomic) UIView promptView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UISearchController searchController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void)dlopenPressed:;
- (void)dlopenWithFormat:;
- (void)dlopenInvalidPath;
- (void)didSelectImagePath:shortName:;
- (void)didSelectBundle:;
- (void)didSelectClass:;
- (id)keyPathController;
- (id)promptView;
- (void).cxx_destruct;
+ (id)globalsEntryTitle:;
+ (id)globalsEntryViewController:;
@end
