@interface CATTaskOperation : CATOperation
@property (nonatomic) NSUUID remoteUUID;
@property (nonatomic) CATTaskRequest request;
@property (nonatomic) <CATTaskOperationNotificationDelegate> notificationDelegate;
- (void)processNotificationWithName:userInfo:;
- (void)cat_addAssertion:;
- (void)setRemoteUUID:;
- (id)initWithRequest:;
- (id)cat_assertions;
- (void)setNotificationDelegate:;
- (id)remoteUUID;
- (id)init;
- (void)processMessage:;
- (id)notificationDelegate;
- (void)postNotificationWithName:userInfo:;
- (BOOL)canSendNotificationWithName:userInfo:;
- (id)request;
- (void)main;
- (void).cxx_destruct;
+ (id)new;
+ (BOOL)validateRequest:error:;
+ (BOOL)isCancelable;
@end
