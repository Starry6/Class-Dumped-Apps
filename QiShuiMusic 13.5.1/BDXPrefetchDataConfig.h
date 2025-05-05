@interface BDXPrefetchDataConfig : NSObject
@property (nonatomic) <BDXPrefetchConfigLoader> configLoader;
@property (nonatomic) NSString accessKey;
@property (nonatomic) Q fromType;
@property (nonatomic) <BDXBridgeNetworkServiceProtocol> networkService;
@property (nonatomic) BDXContext context;
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
- (id)cardModel;
- (id)configLoader;
- (void)setCardModel:;
- (void)setConfigLoader:;
- (id)context;
- (void)setNetworkService:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)networkService;
- (id)accessKey;
- (void)setAccessKey:;
- (unsigned long long)fromType;
- (void)setFromType:;
@end
