@interface ICSetParentalControlRequestOperation : ICRequestOperation
@property (nonatomic) BOOL allowsExplicitContent;
@property (nonatomic) BOOL automatic;
@property (nonatomic) ICStoreRequestContext requestContext;
@property (nonatomic) ICStoreURLRequest storeURLRequest;
- (void)execute;
- (void)cancel;
- (BOOL)allowsExplicitContent;
- (void)setRequestContext:;
- (BOOL)isAutomatic;
- (id)requestContext;
- (void).cxx_destruct;
- (void)setAllowsExplicitContent:;
- (id)initWithRequestContext:allowsExplicitContent:isAutomatic:;
- (void)_buildAndSendRequestForURL:;
- (void)_getURLFromBagAndSendRequest;
- (void)setAutomatic:;
- (id)storeURLRequest;
- (void)setStoreURLRequest:;
@end
