@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback
@property (nonatomic) NSInteger feedbackType;
- (int)feedbackType;
- (void)setFeedbackType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithFeedbackType:;
+ (BOOL)supportsSecureCoding;
@end
