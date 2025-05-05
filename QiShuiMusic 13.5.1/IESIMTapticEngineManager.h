@interface IESIMTapticEngineManager : NSObject
@property (nonatomic) UISelectionFeedbackGenerator selectionFeedback;
@property (nonatomic) UINotificationFeedbackGenerator notificationFeedback;
- (id)notificationFeedback;
- (id)selectionFeedback;
- (void)setNotificationFeedback:;
- (void)setSelectionFeedback:;
- (void).cxx_destruct;
+ (void)notifyFailure;
+ (void)notifySuccess;
+ (void)notifyWarning;
+ (id)sharedManager;
+ (void)tap;
@end
