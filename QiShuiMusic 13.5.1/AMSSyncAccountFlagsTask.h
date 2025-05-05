@interface AMSSyncAccountFlagsTask : AMSTask
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
- (id)account;
- (void)setAccount:;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)performSync;
- (id)initWithAccount:bag:;
@end
