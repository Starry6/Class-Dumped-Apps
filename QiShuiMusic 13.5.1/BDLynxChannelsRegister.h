@interface BDLynxChannelsRegister : NSObject
@property (nonatomic) NSMutableArray registChannels;
@property (nonatomic) NSMutableArray registHighPriorityChannels;
@property (nonatomic) NSMutableArray registDefaultPriorityChannels;
@property (nonatomic) NSLock registLock;
- (void)registChannels:;
- (id)registedDefaultPriorityChannels;
- (void)registChannel:;
- (id)registChannels;
- (id)registDefaultPriorityChannels;
- (id)registHighPriorityChannels;
- (id)registLock;
- (id)registedChannels;
- (id)registedHighPriorityChannels;
- (void)setRegistChannels:;
- (void)setRegistDefaultPriorityChannels:;
- (void)setRegistHighPriorityChannels:;
- (void)setRegistLock:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
