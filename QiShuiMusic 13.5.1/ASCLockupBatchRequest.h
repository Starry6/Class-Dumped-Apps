@interface ASCLockupBatchRequest : NSObject
@property (nonatomic) NSString clientID;
@property (nonatomic) NSSet ids;
@property (nonatomic) NSString kind;
@property (nonatomic) NSString context;
@property (nonatomic) NSArray requests;
- (id)context;
- (id)requests;
- (id)kind;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)clientID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)ids;
- (id)initWithIDs:kind:context:;
- (id)_initWithIDs:kind:context:clientID:;
- (id)lockupBatchRequestWithIDs:;
+ (BOOL)supportsSecureCoding;
+ (id)lockupBatchRequestsFromRequests:;
@end
