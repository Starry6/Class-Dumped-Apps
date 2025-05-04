@interface AWEMessageReachBubbleCallbackContext : AWEMessageReachComponentCallbackContext
@property (nonatomic) q result;
@property (nonatomic) q dismissType;
@property (nonatomic) AWEHPChannelBubbleModel bubbleModel;
- (id)bubbleModel;
- (void)setBubbleModel:;
- (void)setDismissType:;
- (void)setResult:;
- (void).cxx_destruct;
- (long long)result;
- (long long)dismissType;
@end
