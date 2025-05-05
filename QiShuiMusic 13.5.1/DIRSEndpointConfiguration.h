@interface DIRSEndpointConfiguration : NSObject
@property (nonatomic) @? domainBlock;
@property (nonatomic) @? endpointBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDomainBlock:;
- (id)domainBlock;
- (id)domainForService:context:;
- (id)endpointBlock;
- (id)endpointForService:context:;
- (void)setEndpointBlock:;
- (void).cxx_destruct;
+ (id)configurationUsingBlock:;
+ (id)configurationUsingDomainBlock:;
@end
