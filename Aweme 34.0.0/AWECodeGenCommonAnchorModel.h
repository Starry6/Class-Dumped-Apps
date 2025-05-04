@interface AWECodeGenCommonAnchorModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenCommonAnchorBasicInfoModel basicInfoModel;
@property (nonatomic) NSArray anchorSceneInfoListModelArray;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)poiInfo;
- (id)localLifeAnchorInfo;
- (id)anchorSceneInfoListModelArray;
- (id)basicInfoModel;
- (void)updatePoiInfo:;
- (void)setBasicInfoModel:;
- (void)setAnchorSceneInfoListModelArray:;
- (id)basicLogExtraDict;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
