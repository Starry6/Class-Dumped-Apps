@interface IESLiveStreamPlayerLayoutDynamic : IESLiveStreamPlayerLayoutBase
@property (nonatomic) NSDictionary configMap;
@property (nonatomic) NSMutableDictionary calculatorMap;
@property (nonatomic) @ observer;
@property (nonatomic) BOOL enableDynamicLayout;
@property (nonatomic) q preDynamicLayoutKey;
@property (nonatomic) UILabel tipLabel;
- (id)calculatorMap;
- (id)configMap;
- (BOOL)enableDynamicLayout;
- (BOOL)handleSEI:;
- (id)initWithPlayer:layoutMachine:;
- (BOOL)layoutWithMetaInfo:;
- (void)layoutWithPreviousType:;
- (long long)preDynamicLayoutKey;
- (id)rawPlayer;
- (void)removeDebugInfoIfNeeded;
- (void)setCalculatorMap:;
- (void)setConfigMap:;
- (void)setEnableDynamicLayout:;
- (void)setPreDynamicLayoutKey:;
- (BOOL)shouldUseCurrentLayoutType;
- (void)showDebugInfoIfNeed;
- (void)transformConfigMap;
- (void)dealloc;
- (void)setObserver:;
- (void).cxx_destruct;
- (id)layoutFrame;
- (id)observer;
- (id)tipLabel;
- (void)setTipLabel:;
@end
