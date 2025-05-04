@interface AWEStaticFeaturesContextTracker : HTSService
@property (nonatomic) ByteBenchStrategyOC benchStrategy;
@property (nonatomic) <AWEClientAIUIBlockInterface> UIBlockHelper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (id)UIBlockHelper;
- (id)makeValueGetter:;
- (id)benchStrategy;
- (id)getBizFeatureGetterMap;
- (id)getFeaturesWithStrategy:;
- (void)setBenchStrategy:;
- (void)setUIBlockHelper:;
- (void)dealloc;
- (id)getFeature:;
- (void).cxx_destruct;
@end
