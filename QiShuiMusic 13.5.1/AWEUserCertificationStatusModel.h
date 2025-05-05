@interface AWEUserCertificationStatusModel : IESIMBaseApiModel
@property (nonatomic) BOOL isVerified;
@property (nonatomic) q certificationStep;
- (long long)certificationStep;
- (void)setCertificationStep:;
- (BOOL)isVerified;
- (void)setIsVerified:;
+ (id)JSONKeyPathsByPropertyKey;
@end
