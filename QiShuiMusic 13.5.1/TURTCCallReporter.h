@interface TURTCCallReporter : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableDictionary callUUIDToConversation;
@property (nonatomic) TUCallCenter callCenter;
- (id)clientName:;
- (id)initWithCallCenter:;
- (void)callStatusChangedNotification:;
- (id)serviceName:withConversation:;
- (id)callUUIDToConversation;
- (id)reportingSessionForCall:withConversation:;
- (id)callCenter;
- (void).cxx_destruct;
- (void)report:withConversation:;
- (id)rtcCallInfoDictionary:withConversation:;
- (id)queue;
@end
