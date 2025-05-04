@interface AWETapticEngineManager : NSObject
@property (nonatomic) UISelectionFeedbackGenerator selectionFeedback;
@property (nonatomic) UINotificationFeedbackGenerator notificationFeedback;
- (id)notificationFeedback;
- (id)selectionFeedback;
- (void)setSelectionFeedback:;
- (void)setNotificationFeedback:;
- (void).cxx_destruct;
+ (void)notifySuccess;
+ (void)notifyFailure;
+ (void)notifyWarning;
+ (id)sharedManager;
+ (void)tap;
@end
