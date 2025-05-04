@interface AWEPzDomainDataResponse : NSObject
@property (nonatomic) q result;
@property (nonatomic) AWEPzDomainModel domainModel;
- (id)domainModel;
- (void)setDomainModel:;
- (id)initWithResult:domainModel:;
- (void)setResult:;
- (void).cxx_destruct;
- (long long)result;
@end
