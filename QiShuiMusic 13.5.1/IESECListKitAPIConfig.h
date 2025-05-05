@interface IESECListKitAPIConfig : MTLModel
@property (nonatomic) NSArray firstScreenAPIs;
@property (nonatomic) NSArray refreshAPIs;
@property (nonatomic) NSArray loadMoreAPIs;
@property (nonatomic) NSArray clientAiPrefetchAPIs;
@property (nonatomic) NSArray clientAiFirstScreenAPIs;
@property (nonatomic) NSDictionary apiDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiDict;
- (id)firstScreenAPIs;
- (void)setRefreshAPIs:;
- (id)clientAiFirstScreenAPIs;
- (id)clientAiPrefetchAPIs;
- (id)loadMoreAPIs;
- (id)refreshAPIs;
- (void)setApiDict:;
- (void)setClientAiFirstScreenAPIs:;
- (void)setClientAiPrefetchAPIs:;
- (void)setFirstScreenAPIs:;
- (void)setLoadMoreAPIs:;
- (void).cxx_destruct;
+ (id)apiDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
