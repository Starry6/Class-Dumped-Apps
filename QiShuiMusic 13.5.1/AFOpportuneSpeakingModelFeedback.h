@interface AFOpportuneSpeakingModelFeedback : NSObject
@property (nonatomic) NSDate lastNegativeFeedback;
@property (nonatomic) NSDictionary negativeFeedbackByContact;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)lastNegativeFeedback;
- (void)setLastNegativeFeedback:;
- (id)negativeFeedbackByContact;
- (void)setNegativeFeedbackByContact:;
+ (BOOL)supportsSecureCoding;
@end
