@interface AWEInnerNotificationContent : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) AWEInnerNotificationRequest request;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)disableDismissPanGesture;
- (double)dismissTimerInterval;
- (id)notificationOperator;
- (void)renderModel:context:;
- (void)setNotificationOperator:;
- (void)viewDidDisappearWithReason:;
- (void)viewWillDisappearWithReason:;
- (id)init;
- (id)request;
- (id)view;
- (Class)viewClass;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)setView:;
- (void)viewDidAppear;
@end
