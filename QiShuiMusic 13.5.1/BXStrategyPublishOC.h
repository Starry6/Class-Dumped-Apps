@interface BXStrategyPublishOC : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) @ defaultValue;
@property (nonatomic) q updateInterval;
@property (nonatomic) @? strategyCallback;
- (id)initWithParam:defaultValue:callback:;
- (id)initWithParam:defaultValue:updateInterval:callback:;
- (void)setStrategyCallback:;
- (id)strategyCallback;
- (void)update:;
- (long long)updateInterval;
- (void)setDefaultValue:;
- (id)key;
- (void)setUpdateInterval:;
- (id)defaultValue;
- (void)setKey:;
- (void).cxx_destruct;
@end
