@interface ICSuzeLeaseSessionConfiguration : NSObject
@property (nonatomic) @ leaseID;
@property (nonatomic) q mediaType;
@property (nonatomic) ICStoreRequestContext requestContext;
- (long long)mediaType;
- (id)requestContext;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)leaseID;
- (id)initWithRequestContext:leaseID:mediaType:;
@end
