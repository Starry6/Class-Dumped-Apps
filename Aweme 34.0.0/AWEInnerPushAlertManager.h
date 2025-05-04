@interface AWEInnerPushAlertManager : NSObject
@property (nonatomic) AWEInnerPushAlertBase currentAlert;
@property (nonatomic) NSObject<AWEInnerPushAlertManagerDelegate> delegate;
- (void)showPush:;
- (void)alertDismissed:;
- (void)showForcedAlert;
- (void)alertShowedOnView:;
- (void)showForcePush:;
- (void)dismissForcePush;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setCurrentAlert:;
- (id)currentAlert;
- (void)showAlert;
@end
