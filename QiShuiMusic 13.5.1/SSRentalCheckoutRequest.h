@interface SSRentalCheckoutRequest : SSRequest
@property (nonatomic) NSArray sinfs;
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSNumber rentalKeyIdentifier;
@property (nonatomic) q downloadIdentifier;
@property (nonatomic) BOOL shouldValidateRentalInfo;
@property (nonatomic) BOOL checkoutWithPlay;
@property (nonatomic) Q checkoutType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)init;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)accountIdentifier;
- (void)startWithCompletionBlock:;
- (id)initWithAccountIdentifier:rentalKeyIdentifier:;
- (id)sinfs;
- (long long)downloadIdentifier;
- (void)startWithConnectionResponseBlock:;
- (id)initWithDownloadIdentifier:;
- (id)initWithSinfs:;
- (id)rentalKeyIdentifier;
- (BOOL)shouldValidateRentalInfo;
- (void)setShouldValidateRentalInfo:;
- (BOOL)shouldCheckoutWithPlay;
- (void)setCheckoutWithPlay:;
- (unsigned long long)checkoutType;
- (void)setCheckoutType:;
@end
