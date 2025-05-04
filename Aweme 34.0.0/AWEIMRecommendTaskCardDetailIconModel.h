@interface AWEIMRecommendTaskCardDetailIconModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString attributeTitle;
@property (nonatomic) NSString attributeValue;
@property (nonatomic) NSString buttonName;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) q missionSource;
@property (nonatomic) NSString logExtra;
- (void)setLogExtra:;
- (id)logExtra;
- (id)jumpSchema;
- (void)setJumpSchema:;
- (id)attributeTitle;
- (void)setAttributeTitle:;
- (long long)missionSource;
- (void)setMissionSource:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)attributeValue;
- (void)setAttributeValue:;
- (id)buttonName;
- (void)setButtonName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
