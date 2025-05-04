@interface AWEIMSocialEffectReportModel : NSObject
@property (nonatomic) q duetType;
@property (nonatomic) q duetLayout;
@property (nonatomic) q duetRole;
@property (nonatomic) double duetDuration;
@property (nonatomic) BOOL isIMSocialEffect;
@property (nonatomic) NSString effectCategory;
@property (nonatomic) NSString effectExtraInfo;
- (long long)duetLayout;
- (void)setDuetLayout:;
- (long long)duetType;
- (long long)duetRole;
- (void)setDuetRole:;
- (void)setDuetType:;
- (id)effectCategory;
- (void)setEffectCategory:;
- (id)effectExtraInfo;
- (void)setEffectExtraInfo:;
- (void)setDuetDuration:;
- (void)setIsIMSocialEffect:;
- (double)duetDuration;
- (BOOL)isIMSocialEffect;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
