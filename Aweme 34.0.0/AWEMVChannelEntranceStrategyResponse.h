@interface AWEMVChannelEntranceStrategyResponse : AWEBaseApiModel
@property (nonatomic) Q strategy;
@property (nonatomic) AWEMVChannelEntranceStrategyDebugInfo debugInfo;
- (id)debugInfo;
- (unsigned long long)strategy;
- (void).cxx_destruct;
- (void)setDebugInfo:;
- (void)setStrategy:;
+ (id)debugInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
