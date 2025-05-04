@interface AWEProgressDecoratorViewStatusConfig : NSObject
@property (nonatomic) Q decoratorType;
@property (nonatomic) Q bizType;
@property (nonatomic) NSArray dotInfos;
@property (nonatomic) AWEProgressDecoratorViewConfig decoratorNormalConfig;
@property (nonatomic) AWEProgressDecoratorViewConfig decoratorActiveConfig;
@property (nonatomic) AWEProgressDecoratorViewConfig decoratorDraggingConfig;
@property (nonatomic) AWEProgressDecoratorViewConfig decoratorStableConfig;
@property (nonatomic) # customDecoratorViewClass;
- (unsigned long long)bizType;
- (void)setBizType:;
- (id)dotInfos;
- (id)decoratorActiveConfig;
- (id)decoratorDraggingConfig;
- (id)decoratorStableConfig;
- (id)decoratorNormalConfig;
- (void)setDotInfos:;
- (void)setDecoratorNormalConfig:;
- (void)setDecoratorActiveConfig:;
- (void)setDecoratorDraggingConfig:;
- (void)setDecoratorStableConfig:;
- (Class)customDecoratorViewClass;
- (void)setCustomDecoratorViewClass:;
- (void).cxx_destruct;
- (unsigned long long)decoratorType;
- (void)setDecoratorType:;
@end
