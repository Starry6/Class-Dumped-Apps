@interface CNContactActionsContext : NSObject
@property (nonatomic) CNUIUserActionListDataSource dataSource;
@property (nonatomic) CNUIContactsEnvironment environment;
- (id)init;
- (id)environment;
- (id)dataSource;
- (void).cxx_destruct;
- (id)description;
- (void)setCacheEntryRefreshAge:;
- (void)setCacheEntryExpirationAge:;
- (id)initWithDataSource:environment:;
- (void)setCacheEntryLimit:;
@end
