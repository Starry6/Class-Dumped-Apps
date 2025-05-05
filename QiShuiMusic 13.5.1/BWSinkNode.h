@interface BWSinkNode : BWNode
@property (nonatomic) NSString sinkID;
@property (nonatomic) NSString currentStateDebugString;
@property (nonatomic) BOOL isActive;
@property (nonatomic) q liveConfigurationID;
- (long long)liveConfigurationID;
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (id)initWithSinkID:;
- (void)didReachEndOfDataForInput:;
- (void)addOutput:;
- (id)sinkID;
- (BOOL)isActive;
- (void)notifyWhenActive:;
- (void)notifyWhenIdle:;
- (void)notifyWhenConfigurationID:becomesLive:;
- (id)currentStateDebugString;
@end
