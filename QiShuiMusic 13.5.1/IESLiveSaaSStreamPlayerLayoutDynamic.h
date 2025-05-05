@interface IESLiveSaaSStreamPlayerLayoutDynamic : NSObject
@property (nonatomic) NSDictionary configMap;
@property (nonatomic) NSMutableDictionary calculatorMap;
@property (nonatomic) q preDynamicLayoutKey;
- (id)calculatorMap;
- (id)configMap;
- (id)initWithDIContext:;
- (long long)preDynamicLayoutKey;
- (void)setCalculatorMap:;
- (void)setConfigMap:;
- (void)setPreDynamicLayoutKey:;
- (void)transformConfigMap;
- (void)updateWithStreamVersion:;
- (void).cxx_destruct;
- (id)layoutFrame;
@end
