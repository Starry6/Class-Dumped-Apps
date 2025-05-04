@interface AWEIMEmotionCareBotFeedbackUtility : NSObject
+ (BOOL)canDisplayFeedbackWithMessage:;
+ (long long)feedbackTypeWithMessage:;
+ (void)modifyFeedbackTypeWithMessage:feedbackType:;
+ (id)propertyManager;
@end
