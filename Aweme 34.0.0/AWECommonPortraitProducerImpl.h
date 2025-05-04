@interface AWECommonPortraitProducerImpl : IESMutablePortraitProducer
@property (nonatomic) NSDictionary portraitHandlerMap;
- (void)doSetup;
- (BOOL)containsKey:inTypes:;
- (id)getPortraitElement:inTypes:params:;
- (id)getPortraitElements;
- (void)configKeys;
- (void)setPortraitHandlerMap:;
- (id)portraitHandlerMap;
- (id)buildCustomKeysAndConfigs;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
