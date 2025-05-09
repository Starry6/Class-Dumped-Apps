@interface CXVoicemailControllerHost : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <CXVoicemailControllerHostDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) NSXPCListener xpcListener;
@property (nonatomic) NSMutableDictionary voicemailUUIDToVoicemailMap;
@property (nonatomic) NSMutableSet connections;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)connections;
- (id)init;
- (void)setDelegate:;
- (void)_performDelegateCallback:;
- (void)setConnections:;
- (id)delegateQueue;
- (void)setXpcListener:;
- (id)xpcListener;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)setDelegateQueue:;
- (id)queue;
- (id)voicemailUUIDToVoicemailMap;
- (void)addOrUpdateVoicemails:;
- (void)removeVoicemails:;
- (void)voicemailControllerHostConnectionInvalidated:;
- (void)voicemailControllerHostConnection:requestVoicemails:;
- (void)voicemailControllerHostConnection:requestTransaction:completion:;
- (id)initWithVoicemails:delegate:queue:;
- (id)_voicemailsForVoicemailControllerHostConnection:;
- (void)setVoicemailUUIDToVoicemailMap:;
@end
