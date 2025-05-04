@interface AWERewardAutoUnlockConfig : AWEBaseApiModel
@property (nonatomic) AWERewardAutoUnlockBtnConfig currentUnlockConfig;
@property (nonatomic) AWERewardAutoUnlockBtnConfig nextUnlockConfig;
- (id)currentUnlockConfig;
- (void)setCurrentUnlockConfig:;
- (id)nextUnlockConfig;
- (void)setNextUnlockConfig:;
- (void).cxx_destruct;
+ (id)currentUnlockConfigJSONTransformer;
+ (id)nextUnlockConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
