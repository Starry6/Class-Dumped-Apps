@interface CLSAnswerFormat : CLSAbstractAnswerFormat
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (BOOL)validateObject:;
- (long long)answerFormatType;
- (void)setAnswerFormatType:;
+ (BOOL)supportsSecureCoding;
@end
