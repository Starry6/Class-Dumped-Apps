@interface AMSAgeVerificationRequiredResult : NSObject
@property (nonatomic) BOOL isVerificationRequired;
@property (nonatomic) Q requiredType;
- (id)initWithRequiredType:;
- (BOOL)isVerificationRequired;
- (void)setIsVerificationRequired:;
- (unsigned long long)requiredType;
- (void)setRequiredType:;
@end
