@interface CNAccountsAndGroupsAuthorizationContext : NSObject
@property (nonatomic) q type;
@property (nonatomic) CNAccountsAndGroupsItem item;
@property (nonatomic) CNContainerPickerItem containerItem;
@property (nonatomic) CNAccountsAndGroupsCell cell;
@property (nonatomic) NSArray contactsToAddToDropDestination;
@property (nonatomic) @? actionCompletionHandler;
- (id)item;
- (void)setType:;
- (void)setItem:;
- (long long)type;
- (id)containerItem;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
- (void)setContainerItem:;
- (id)contactsToAddToDropDestination;
- (void)setContactsToAddToDropDestination:;
- (id)actionCompletionHandler;
- (void)setActionCompletionHandler:;
@end
