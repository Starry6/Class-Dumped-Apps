@interface WBSPasswordBreachContext : NSObject
@property (nonatomic) WBSPasswordBreachConfiguration configuration;
@property (nonatomic) WBSPasswordBreachCryptographicOperations cryptographicOperations;
@property (nonatomic) WBSPasswordBreachStore store;
- (id)initWithConfiguration:store:;
- (id)cryptographicOperations;
- (id)configuration;
- (void).cxx_destruct;
- (id)store;
@end
