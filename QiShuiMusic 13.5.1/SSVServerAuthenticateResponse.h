@interface SSVServerAuthenticateResponse : NSObject
@property (nonatomic) NSNumber authenticatedAccountIdentifier;
@property (nonatomic) q performedButtonIndex;
@property (nonatomic) NSURL redirectURL;
@property (nonatomic) q selectedButtonIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)redirectURL;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)setRedirectURL:;
- (void).cxx_destruct;
- (long long)selectedButtonIndex;
- (void)setSelectedButtonIndex:;
- (id)authenticatedAccountIdentifier;
- (void)setAuthenticatedAccountIdentifier:;
- (long long)performedButtonIndex;
- (void)setPerformedButtonIndex:;
@end
