@interface AWEMateListDataContext : NSObject
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) q cardGuideType;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString enterType;
- (void)configWithRouterParamsDictionary:;
- (void)setCardGuideType:;
- (long long)cardGuideType;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)enterType;
- (id)pageIdentifier;
- (void)setEnterType:;
- (void)setPageIdentifier:;
@end
