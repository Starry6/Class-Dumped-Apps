@interface BDXDowngradeModel : MTLModel
@property (nonatomic) BDXDowngradeBaseModel load;
@property (nonatomic) BDXDowngradeBaseModel monitor;
@property (nonatomic) BDXDowngradeBaseModel router;
@property (nonatomic) BDXDowngradeLogModel log;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLoad:;
- (id)load;
- (id)log;
- (void)setLog:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)router;
- (void)setRouter:;
+ (id)baseTransformer;
+ (id)loadJSONTransformer;
+ (id)logJSONTransformer;
+ (id)monitorJSONTransformer;
+ (id)routerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
