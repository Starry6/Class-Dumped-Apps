@interface AMSSignOutTask : AMSTask
@property (nonatomic) NSArray accounts;
- (id)accounts;
- (void).cxx_destruct;
- (void)setAccounts:;
- (id)performTask;
- (id)initWithAccounts:;
+ (id)_signOutOfAccount:;
@end
