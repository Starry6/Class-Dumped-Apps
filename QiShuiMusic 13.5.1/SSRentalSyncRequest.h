@interface SSRentalSyncRequest : SSRequest
@property (nonatomic) NSArray sinfs;
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSNumber rentalKeyIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)accountIdentifier;
- (void).cxx_destruct;
- (id)initWithAccountIdentifier:;
- (id)initWithAccountIdentifier:rentalKeyIdentifier:;
- (id)sinfs;
- (void)startWithConnectionResponseBlock:;
- (id)initWithSinfs:;
- (id)rentalKeyIdentifier;
@end
