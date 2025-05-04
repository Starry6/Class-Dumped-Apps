@interface AWEBatManOnQueueContent : NSObject
@property (nonatomic) AWEBatManOnQueueView onQueueView;
@property (nonatomic) AWEBatManOnQueueNotifyContext context;
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
- (id)onQueueView;
- (void)setOnQueueView:;
- (id)view;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setRequest:;
- (id)request;
@end
