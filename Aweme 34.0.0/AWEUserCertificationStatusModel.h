@interface AWEUserCertificationStatusModel : AWEBaseApiModel
@property (nonatomic) BOOL isVerified;
@property (nonatomic) q certificationStep;
@property (nonatomic) q reviewStatus;
- (void)setReviewStatus:;
- (long long)reviewStatus;
- (long long)certificationStep;
- (void)setCertificationStep:;
- (BOOL)isVerified;
- (void)setIsVerified:;
+ (id)JSONKeyPathsByPropertyKey;
@end
