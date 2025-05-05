@interface SSVClaimApplicationsRequest : SSRequest
@property (nonatomic) q claimStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (long long)claimStyle;
- (id)initWithClaimStyle:;
- (void)startWithResponseBlock:;
@end
