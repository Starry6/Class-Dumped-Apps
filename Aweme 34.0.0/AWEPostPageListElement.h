@interface AWEPostPageListElement : AWEPostPageElement
@property (nonatomic) AWEPostPageTableView tableView;
@property (nonatomic) BOOL didCompletedFirstLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAccessibilityElements;
- (BOOL)didCompletedFirstLayout;
- (void)setDidCompletedFirstLayout:;
- (id)tableView:viewForHeaderInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)service;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)contentView;
- (id)tableView;
- (void).cxx_destruct;
- (double)tableView:heightForHeaderInSection:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:;
+ (id)type;
@end
