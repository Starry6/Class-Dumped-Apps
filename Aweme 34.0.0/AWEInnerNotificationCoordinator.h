@interface AWEInnerNotificationCoordinator : NSObject
@property (nonatomic) RxDeferred deferred;
@property (nonatomic) AWEInnerNotificationRequest request;
@property (nonatomic) <AWEInnerNotificationCoordinatorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (long long)innerPushLevel;
- (void)dismissInnerPush:;
- (void)displayInnerPush:;
- (id)requestShowNotificationWithDelegate:requestIdentifier:;
- (id)deferred;
- (id)delegate;
- (void)setDeferred:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)request;
- (void)dismissNotificationWithIdentifier:;
@end
