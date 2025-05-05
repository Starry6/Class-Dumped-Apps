@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep
- (void)setVersion:;
- (long long)version;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
+ (BOOL)supportsSecureCoding;
@end
