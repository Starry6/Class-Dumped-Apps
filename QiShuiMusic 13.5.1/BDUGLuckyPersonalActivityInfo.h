@interface BDUGLuckyPersonalActivityInfo : BDUGLuckyBDModel
@property (nonatomic) BDUGLuckyPersonalActivityCommon activityCommon;
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
