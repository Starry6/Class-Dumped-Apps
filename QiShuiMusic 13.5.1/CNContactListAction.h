@interface CNContactListAction : NSObject
@property (nonatomic) CNContactListActionConfiguration configuration;
@property (nonatomic) NSArray contacts;
@property (nonatomic) <CNContactListActionDelegate> delegate;
- (void)setContacts:;
- (id)contacts;
- (void)setDelegate:;
- (void)performAction;
- (void)setConfiguration:;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)editRequiresAuthorization;
- (BOOL)shouldReloadListOnCompletion;
- (id)initWithContacts:configuration:;
- (BOOL)editRequiresAuthorizationCheckForContact:containerIdentifier:;
@end
