@interface AWEAiPortraitProducerImpl : IESMutablePortraitProducer
@property (nonatomic) <AWEOHRServiceManager> ohrService;
@property (nonatomic) <AWECommerceModuleService> commerceModuleService;
@property (nonatomic) <AWEPerfEvaluateServicePrivate> perfEvaluateService;
@property (nonatomic) NSDictionary valueGetterDict;
@property (nonatomic) q harRctRange;
- (void)doSetup;
- (BOOL)containsKey:inTypes:;
- (id)getPortraitElement:inTypes:params:;
- (id)getPortraitElements;
- (void)configKeys;
- (long long)harRctRange;
- (id)commerceModuleService;
- (id)ohrService;
- (id)portraitValueFromOHRHand:;
- (id)perfEvaluateService;
- (void)setValueGetterDict:;
- (id)portraitConfigForKey:;
- (id)valueGetterDict;
- (void)setOhrService:;
- (void)setCommerceModuleService:;
- (void)setPerfEvaluateService:;
- (void)setHarRctRange:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
