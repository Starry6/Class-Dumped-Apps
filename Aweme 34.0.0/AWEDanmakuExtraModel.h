@interface AWEDanmakuExtraModel : AWEBaseApiModel
@property (nonatomic) NSString logoURL;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSNumber pendantID;
@property (nonatomic) NSNumber materialID;
@property (nonatomic) NSString searchSchema;
@property (nonatomic) NSArray danmakuStyleList;
- (void)setMaterialID:;
- (id)searchSchema;
- (void)setPendantID:;
- (id)pendantID;
- (id)danmakuStyleList;
- (void)setDanmakuStyleList:;
- (void)setSearchSchema:;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (id)materialID;
- (id)logoURL;
- (void)setLogoURL:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
