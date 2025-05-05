@interface SSRentalCheckinRequest : SSRequest
@property (nonatomic) NSArray sinfs;
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSNumber rentalKeyIdentifier;
- (id)initWithXPCEncoding:;
- (id)init;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)accountIdentifier;
- (void)startWithCompletionBlock:;
- (id)initWithAccountIdentifier:rentalKeyIdentifier:;
- (id)sinfs;
- (void)startWithConnectionResponseBlock:;
- (id)initWithSinfs:;
- (id)rentalKeyIdentifier;
@end
