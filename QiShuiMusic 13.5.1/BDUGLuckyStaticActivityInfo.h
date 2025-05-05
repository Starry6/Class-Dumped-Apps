@interface BDUGLuckyStaticActivityInfo : BDUGLuckyBDModel
@property (nonatomic) BDUGLuckyStaticActivityCommon activityCommon;
@property (nonatomic) NSDictionary activityCustom;
- (id)activityCommon;
- (id)activityCustom;
- (id)modelCustomWillTransformFromDictionary:;
- (void)setActivityCommon:;
- (void)setActivityCustom:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
