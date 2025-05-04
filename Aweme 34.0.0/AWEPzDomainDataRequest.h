@interface AWEPzDomainDataRequest : NSObject
@property (nonatomic) NSString domainName;
@property (nonatomic) NSString dataHash;
@property (nonatomic) AWEPzDomainDataResponse response;
- (id)domainName;
- (id)response;
- (id)description;
- (void)setDomainName:;
- (id)dataHash;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)setDataHash:;
@end
