@interface AWEDanmakuEggActivityModel : AWEBaseApiModel
@property (nonatomic) NSNumber activityID;
@property (nonatomic) BOOL effectForAll;
@property (nonatomic) NSArray matchList;
@property (nonatomic) NSArray includeList;
@property (nonatomic) NSArray eggMaterials;
- (id)eggMaterials;
- (BOOL)effectForAll;
- (id)matchList;
- (id)includeList;
- (id)initWithActivityID:effectForAll:matchList:includeList:eggMaterials:;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
+ (id)eggMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
