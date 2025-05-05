@interface UIKBHandwritingInputSpeedModel : NSObject
@property (nonatomic) BOOL autoConfirmationEnabled;
@property (nonatomic) double minTimeout;
@property (nonatomic) double maxTimeout;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} handwritingFrame;
- (id)init;
- (double)maxTimeout;
- (void).cxx_destruct;
- (void)beginStroke;
- (void)addPoint:timestamp:;
- (void)endStroke;
- (void)endCharacter;
- (double)speedForCurrentStroke;
- (double)smoothValueFromArray:;
- (double)timeoutForNextPage;
- (void)updatePreferences;
- (BOOL)autoConfirmationEnabled;
- (double)minTimeout;
- (id)handwritingFrame;
- (void)setHandwritingFrame:;
@end
