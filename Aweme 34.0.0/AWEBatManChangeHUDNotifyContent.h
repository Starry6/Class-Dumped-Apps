@interface AWEBatManChangeHUDNotifyContent : NSObject
@property (nonatomic) AWEBatManChangeHUDView hudView;
@property (nonatomic) AWEInnerNotificationRequest request;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (id)notificationOperator;
- (void)viewDidDisappearWithReason:;
- (double)dismissTimerInterval;
- (void)setNotificationOperator:;
- (void)batManExitNotification;
- (id)init;
- (void)dealloc;
- (id)view;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
- (id)hudView;
- (void)setHudView:;
@end
