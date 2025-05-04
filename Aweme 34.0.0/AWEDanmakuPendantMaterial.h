@interface AWEDanmakuPendantMaterial : AWEBaseApiModel
@property (nonatomic) NSNumber activityID;
@property (nonatomic) NSNumber materialID;
@property (nonatomic) NSString materialPath;
@property (nonatomic) NSNumber probability;
@property (nonatomic) NSString materialURL;
@property (nonatomic) double materialRatio;
@property (nonatomic) NSString materialMd5;
- (void)setMaterialID:;
- (id)materialURL;
- (id)materialMd5;
- (id)materialPath;
- (double)materialRatio;
- (id)description;
- (void).cxx_destruct;
- (id)materialID;
- (id)activityID;
- (void)setActivityID:;
- (id)probability;
+ (id)JSONKeyPathsByPropertyKey;
@end
