@interface CLSSurveyStep : CLSAbstractSurveyStep
- (void)setVersion:;
- (long long)version;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (BOOL)validateObject:;
+ (BOOL)supportsSecureCoding;
@end
