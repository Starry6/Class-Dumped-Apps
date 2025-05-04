@interface AWEThirdPlatformLoginSetting : AWEBaseApiModel
@property (nonatomic) NSArray jumpModel;
@property (nonatomic) NSArray profileModel;
@property (nonatomic) NSArray otherModel;
- (void)setJumpModel:;
- (id)jumpModel;
- (id)otherModel;
- (void)setOtherModel:;
- (void).cxx_destruct;
- (id)profileModel;
- (void)setProfileModel:;
+ (id)profileModelJSONTransformer;
+ (id)otherModelJSONTransformer;
+ (id)jumpModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
