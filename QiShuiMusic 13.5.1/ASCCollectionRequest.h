@interface ASCCollectionRequest : NSObject
@property (nonatomic) NSString clientID;
@property (nonatomic) NSString id;
@property (nonatomic) NSString kind;
@property (nonatomic) NSString context;
@property (nonatomic) q limit;
- (long long)limit;
- (id)context;
- (id)id;
- (id)kind;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)clientID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithID:kind:context:limit:;
- (id)_collectionRequestWithClientID:;
- (id)_initWithID:kind:context:limit:clientID:;
- (id)collectionRequestWithClientID:;
+ (BOOL)supportsSecureCoding;
+ (id)_requestWithID:kind:context:limit:clientID:;
@end
