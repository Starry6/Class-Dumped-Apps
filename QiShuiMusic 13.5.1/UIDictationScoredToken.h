@interface UIDictationScoredToken : UIDictationToken
@property (nonatomic) double confidenceScore;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (double)confidenceScore;
- (id)_descriptionExtra;
- (id)initWithText:removeSpaceBefore:removeSpaceAfter:confidenceScore:;
+ (BOOL)supportsSecureCoding;
@end
