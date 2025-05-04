@interface AWEECommerceAlertManager : NSObject
@property (nonatomic) AWEBubble bubbleView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)dismissBubble;
- (BOOL)shouldShowAlert;
- (BOOL)isAlertShowing;
- (void)tapToDismissBubble;
- (BOOL)_presentBubbleWithTitle:imageUrl:andDuration:bubbleId:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareWithCompletion:;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)showAlert;
+ (id)sharedManager;
@end
