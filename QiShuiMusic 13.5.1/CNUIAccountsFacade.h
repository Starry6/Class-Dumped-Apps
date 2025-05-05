@interface CNUIAccountsFacade : NSObject
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) CNUIAccountsFacadeRequestRunner requestRunner;
- (id)init;
- (id)accountStore;
- (void).cxx_destruct;
- (id)initWithAccountStore:requestRunner:;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:;
- (id)requestRunner;
@end
