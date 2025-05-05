@interface SSVCloudServiceAPITokenRequest : SSRequest
@property (nonatomic) NSString clientToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)clientToken;
- (void)startWithResponseBlock:;
- (id)initWithClientToken:;
@end
