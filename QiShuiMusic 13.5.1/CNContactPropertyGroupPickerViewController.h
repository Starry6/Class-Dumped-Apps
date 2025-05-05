@interface CNContactPropertyGroupPickerViewController : UIViewController
@property (nonatomic) NSArray prohibitedPropertyKeys;
@property (nonatomic) <CNContactGroupPickerDelegate> groupPickerDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)cancel:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)prohibitedPropertyKeys;
- (void)viewWillAppear:;
- (void)loadView;
- (void)setProhibitedPropertyKeys:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:willDisplayHeaderView:forSection:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)initWithGroups:;
- (id)groupPickerDelegate;
- (void)setGroupPickerDelegate:;
- (id)_loadPickableGroupsWithPickedGroups:policy:;
+ (BOOL)propertiesLeftToPickWithPickedGroups:policy:;
+ (BOOL)propertiesLeftToPickWithPickedGroups:policy:prohibitedPropertyKeys:;
+ (id)propertySections;
+ (id)pickableGroupsWithPickedGroups:policy:prohibitedPropertyKeys:;
@end
