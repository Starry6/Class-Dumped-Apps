@interface IESLiveRecvSyncStreamInfoManager : NSObject
@property (nonatomic) <HTSLiveMessageDispatcherAdapter> dispatcher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (void)setDispatcher:;
- (id)dispatcher;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
