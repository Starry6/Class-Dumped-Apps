@interface AWEModernFeedVideoDeepQAShortAnswerFrame : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} shortAnswerFrame;
@property (nonatomic) NSAttributedString shortAnswerText;
- (void)configFrameWithModel:containerWidth:leftMargin:rightMargin:;
- (id)shortAnswerFrame;
- (void)setShortAnswerFrame:;
- (void)setShortAnswerText:;
- (id)shortAnswerText;
- (id)init;
- (void).cxx_destruct;
@end
