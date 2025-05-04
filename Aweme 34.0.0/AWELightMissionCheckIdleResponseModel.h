@interface AWELightMissionCheckIdleResponseModel : AWEBaseApiModel
@property (nonatomic) q checkIdleCode;
@property (nonatomic) BOOL checkIdle;
- (long long)checkIdleCode;
- (BOOL)checkIdle;
- (void)setCheckIdleCode:;
- (void)setCheckIdle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
