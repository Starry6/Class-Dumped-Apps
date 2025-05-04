@interface AWEDanmakuPendantActivityModel : AWEBaseApiModel
@property (nonatomic) NSNumber activityID;
@property (nonatomic) BOOL effectForAll;
@property (nonatomic) NSArray matchList;
@property (nonatomic) NSArray includeList;
@property (nonatomic) NSArray pendantMaterials;
- (id)pendantMaterials;
- (id)initWithActivityID:effectForAll:matchList:includeList:pendantMaterials:;
- (BOOL)effectForAll;
- (id)matchList;
- (id)includeList;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
+ (id)pendantMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
