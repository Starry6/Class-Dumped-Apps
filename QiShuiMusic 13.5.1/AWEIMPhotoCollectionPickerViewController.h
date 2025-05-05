@interface AWEIMPhotoCollectionPickerViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) @? selectCollectionBlock;
@property (nonatomic) NSArray collections;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)assetCollectionAtIndex:;
- (id)selectCollectionBlock;
- (void)setSelectCollectionBlock:;
- (void)setCollections:;
- (id)collections;
- (void)didReceiveMemoryWarning;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
@end
