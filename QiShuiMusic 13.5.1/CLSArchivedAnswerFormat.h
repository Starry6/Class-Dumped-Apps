@interface CLSArchivedAnswerFormat : CLSAbstractAnswerFormat
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (long long)answerFormatType;
- (void)setAnswerFormatType:;
+ (BOOL)supportsSecureCoding;
@end
