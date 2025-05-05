@interface BattleEffectInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary mixAnchorEffectMap;
@property (nonatomic) NSMutableDictionary anchorEffectMap;
@property (nonatomic) Q anchorEffectMap_Count;
- (id)mixAnchorEffectMap;
+ (id)descriptor;
@end
