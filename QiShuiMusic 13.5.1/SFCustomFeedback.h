@interface SFCustomFeedback : SFFeedback
@property (nonatomic) Q feedbackType;
@property (nonatomic) NSDictionary jsonFeedback;
@property (nonatomic) NSData data;
- (unsigned long long)feedbackType;
- (void)setFeedbackType:;
- (id)data;
- (id)initWithCoder:;
- (id)initWithType:jsonFeedback:;
- (void)encodeWithCoder:;
- (id)jsonFeedback;
- (void).cxx_destruct;
- (void)setData:;
- (id)initWithType:data:;
- (void)setJsonFeedback:;
+ (BOOL)supportsSecureCoding;
@end
