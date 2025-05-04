@interface AWESearchAlienatedTabExitRuleModel : AWEBaseApiModel
@property (nonatomic) q noClickMaxShowDays;
@property (nonatomic) q maxShowDays;
@property (nonatomic) q noClickMaxShowDaysWithBackDays;
@property (nonatomic) q noClickBackDays;
@property (nonatomic) q showDaysWithBackDays;
@property (nonatomic) q backDays;
- (void)setNoClickMaxShowDays:;
- (void)setMaxShowDays:;
- (void)setNoClickMaxShowDaysWithBackDays:;
- (void)setNoClickBackDays:;
- (void)setShowDaysWithBackDays:;
- (void)setBackDays:;
- (long long)maxShowDays;
- (long long)noClickMaxShowDays;
- (long long)showDaysWithBackDays;
- (long long)noClickMaxShowDaysWithBackDays;
- (long long)backDays;
- (long long)noClickBackDays;
+ (id)JSONKeyPathsByPropertyKey;
@end
