@interface HybridResourceLoaderProcessorConfig : NSObject
@property (nonatomic) NSArray highProcessorProviderArray;
@property (nonatomic) NSArray lowProcessorProviderArray;
@property (nonatomic) BOOL disableDefaultProcessors;
@property (nonatomic) NSArray defaultProcessorsSequence;
- (id)defaultProcessorsSequence;
- (BOOL)disableDefaultProcessors;
- (id)highProcessorProviderArray;
- (id)lowProcessorProviderArray;
- (void)setDefaultProcessorsSequence:;
- (void)setDisableDefaultProcessors:;
- (void)setHighProcessorProviderArray:;
- (void)setLowProcessorProviderArray:;
- (void).cxx_destruct;
@end
