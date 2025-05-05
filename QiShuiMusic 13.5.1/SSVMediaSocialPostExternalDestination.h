@interface SSVMediaSocialPostExternalDestination : NSObject
@property (nonatomic) NSString pageAccessToken;
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) NSString accessToken;
@property (nonatomic) NSString serviceIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)setServiceIdentifier:;
- (id)copyXPCEncoding;
- (id)serviceIdentifier;
- (id)accessToken;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setAccessToken:;
- (id)pageAccessToken;
- (void)setPageAccessToken:;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
@end
