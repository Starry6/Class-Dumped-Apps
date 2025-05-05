@interface ASDNotificationCenter : NSObject
@property (nonatomic) <ASDNotificationCenterDialogObserver> dialogObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dialogObserver;
- (id)init;
- (void)removeProgressObserver:;
- (void)addNotificationObserver:forName:;
- (void)removeNotificationObserver:forName:;
- (void)setDialogObserver:;
- (void)deliverProgress:;
- (void)deliverEngagementRequest:withResultHandler:;
- (void)isDialogObserverAvailableWithReplyHandler:;
- (void)deliverDialogRequest:withResultHandler:;
- (void)deliverAuthenticateRequest:withResultHandler:;
- (void)deliverViewPresentationRequest:resultHandler:;
- (void).cxx_destruct;
- (void)addProgressObserver:;
- (void)deliverNotifications:;
+ (id)interface;
+ (id)defaultCenter;
@end
