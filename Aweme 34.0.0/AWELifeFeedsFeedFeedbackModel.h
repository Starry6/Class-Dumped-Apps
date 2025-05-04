@interface AWELifeFeedsFeedFeedbackModel : NSObject
@property (nonatomic) NSString cardId;
@property (nonatomic) NSNumber cardType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} feedbackFrame;
@property (nonatomic) NSDictionary feedbackData;
- (void)setFeedbackData:;
- (void)setFeedbackFrame:;
- (id)feedbackFrame;
- (id)feedbackData;
- (void).cxx_destruct;
- (id)cardId;
- (id)cardType;
- (void)setCardType:;
- (void)setCardId:;
@end
