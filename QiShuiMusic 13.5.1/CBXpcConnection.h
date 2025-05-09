@interface CBXpcConnection : NSObject
@property (nonatomic) <CBXpcConnectionDelegate> delegate;
- (void)sendMsg:args:;
- (void)setWhbLocalId:forRemoteId:;
- (void)removeWhbRemoteId:;
- (void)_handleFinalized;
- (void)sendMsgWithReply:args:replyBlock:;
- (id)getWhbLocalIdForRemoteId:;
- (id)sendSyncMsg:args:;
- (void)disconnect;
- (void)setDelegate:;
- (void)didReceiveForwardedDelegateCallbackMessage:;
- (void)_applicationWillEnterForegroundNotification;
- (void)_handleMsg:;
- (void)setTargetQueue:;
- (void)forwardWhbMsg:args:cnx:;
- (id)_allocXpcMsg:args:;
- (id)getEventQueue;
- (void)_applicationDidEnterBackgroundNotification;
- (id)delegate;
- (void)_handleConnectionEvent:;
- (void).cxx_destruct;
- (id)_nameForMessage:;
- (id)initWithDelegate:queue:options:sessionType:;
- (void)_handleInvalid;
- (void)_sendBarrier;
- (void)setWhbReplyHandler:;
- (void)_checkIn;
- (void)didReceiveForwardedMessage:;
- (void)_handleReset;
- (void)_checkOut;
@end
