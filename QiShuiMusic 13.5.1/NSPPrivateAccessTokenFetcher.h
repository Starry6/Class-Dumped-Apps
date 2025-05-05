@interface NSPPrivateAccessTokenFetcher : NSObject
@property (nonatomic) NSString selectedOrigin;
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) NSString bundleID;
- (void)setAuditToken:;
- (id)auditToken;
- (void).cxx_destruct;
- (id)bundleID;
- (void)setBundleID:;
- (id)initWithChallenge:tokenKey:originNameKey:;
- (void)fetchTokenWithQueue:completionHandler:;
- (void)setSelectedOrigin:;
- (void)addSecondaryChallenge:tokenKey:originNameKey:;
- (id)initWithChallenge:tokenPublicKey:issuerPublicKey:;
- (id)selectedOrigin;
@end
