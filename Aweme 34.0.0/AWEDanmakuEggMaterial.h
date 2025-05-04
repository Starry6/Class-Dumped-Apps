@interface AWEDanmakuEggMaterial : AWEBaseApiModel
@property (nonatomic) NSNumber activityID;
@property (nonatomic) NSNumber materialID;
@property (nonatomic) NSString materialPath;
@property (nonatomic) q materialType;
@property (nonatomic) double materialRatio;
@property (nonatomic) NSNumber probability;
@property (nonatomic) NSString materialMd5;
- (void)setMaterialID:;
- (id)materialMd5;
- (id)materialPath;
- (double)materialRatio;
- (id)description;
- (void).cxx_destruct;
- (id)materialID;
- (long long)materialType;
- (id)activityID;
- (void)setActivityID:;
- (id)probability;
+ (id)JSONKeyPathsByPropertyKey;
@end
