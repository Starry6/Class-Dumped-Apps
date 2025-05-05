@interface ECHeaderAuthenticationResults : NSObject
@property (nonatomic) NSString authenticationServiceIdentifier;
@property (nonatomic) q version;
@property (nonatomic) NSArray statements;
- (long long)version;
- (void).cxx_destruct;
- (id)statements;
- (id)initWithAuthenticationServiceIdentifier:version:statements:;
- (id)firstStatementForMethod:;
- (id)authenticationServiceIdentifier;
+ (id)authenticationResultsForHeaders:;
@end
