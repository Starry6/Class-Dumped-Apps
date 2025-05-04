@interface AWECitySelectSubViewController : UIViewController
@property (nonatomic) UITableView cityTableView;
@property (nonatomic) AWECitySelectAppearance appearance;
@property (nonatomic) AWECityModel city;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCityTableView:;
- (id)cityTableView;
- (void)setAppearance:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)appearance;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)completion;
- (id)city;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)viewDidLoad;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setCity:;
- (void)back;
@end
