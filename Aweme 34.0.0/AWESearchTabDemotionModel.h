@interface AWESearchTabDemotionModel : AWEBaseApiModel
@property (nonatomic) q maxShowNum;
@property (nonatomic) q noClickMaxShowNum;
- (long long)maxShowNum;
- (void)setMaxShowNum:;
- (long long)noClickMaxShowNum;
- (void)setNoClickMaxShowNum:;
+ (id)JSONKeyPathsByPropertyKey;
@end
