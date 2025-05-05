@interface SurvivalInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary mixAnchorInfoMap;
@property (nonatomic) q stage;
@property (nonatomic) NSMutableDictionary anchorInfoMap;
@property (nonatomic) Q anchorInfoMap_Count;
- (id)mixAnchorInfoMap;
+ (id)descriptor;
@end
