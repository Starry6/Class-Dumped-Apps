@interface AWENetworkDomainConfig : MTLModel
@property (nonatomic) NSArray frontierURLList;
@property (nonatomic) NSArray shareCookieURLList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frontierURLList;
- (void)setFrontierURLList:;
- (void)setShareCookieURLList:;
- (id)shareCookieURLList;
- (void).cxx_destruct;
+ (id)shareCookieURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
