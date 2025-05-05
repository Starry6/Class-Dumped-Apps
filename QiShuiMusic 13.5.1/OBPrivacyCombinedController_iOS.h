@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController
@property (nonatomic) NSArray identifiers;
@property (nonatomic) NSArray privacyFlows;
@property (nonatomic) BOOL isUnifiedAbout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithIdentifiers:;
- (id)identifiers;
- (id)tableView:cellForRowAtIndexPath:;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:;
- (void)setIdentifiers:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setCustomTintColor:;
- (void)viewWillAppear:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (void)showPrivacyGateway:;
- (id)privacyFlows;
- (void)setPrivacyFlows:;
- (BOOL)isUnifiedAbout;
- (void)setIsUnifiedAbout:;
@end
