@interface OBSetupAssistantBulletedListController : OBWelcomeController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoad;
- (id)initWithTitle:detailText:icon:;
- (void)addBulletedListItemWithDescription:image:;
@end
