@interface AWEInnerNotificationCoordinator : NSObject
@property (nonatomic) RxDeferred deferred;
@property (nonatomic) AWEInnerNotificationRequest request;
@property (nonatomic) <AWEInnerNotificationCoordinatorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissInnerPush:;
- (void)displayInnerPush:;
- (long long)innerPushLevel;
- (void)renderModel:context:;
- (id)requestShowNotificationWithDelegate:requestIdentifier:;
- (void)setDelegate:;
- (id)request;
- (void)setDeferred:;
- (id)delegate;
- (void).cxx_destruct;
- (id)deferred;
- (void)dismissNotificationWithIdentifier:;
@end
