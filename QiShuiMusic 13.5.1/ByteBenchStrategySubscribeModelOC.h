@interface ByteBenchStrategySubscribeModelOC : NSObject
@property (nonatomic) NSString feature;
@property (nonatomic) NSString strategy;
@property (nonatomic) q valueType;
@property (nonatomic) @ defaultValue;
@property (nonatomic) NSString subSpace;
- (id)initWithFeature:strategy:subSpace:valueType:defaultValue:;
- (void)setSubSpace:;
- (id)subSpace;
- (void)setFeature:;
- (id)feature;
- (id)strategy;
- (void)setValueType:;
- (void)setDefaultValue:;
- (id)defaultValue;
- (void).cxx_destruct;
- (void)setStrategy:;
- (long long)valueType;
@end
