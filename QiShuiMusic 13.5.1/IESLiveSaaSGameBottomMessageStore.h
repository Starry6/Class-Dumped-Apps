@interface IESLiveSaaSGameBottomMessageStore : NSObject
@property (nonatomic) IESLiveSaaSGameMessageQueue nodeQueue;
@property (nonatomic) BOOL isGameMessageShowing;
@property (nonatomic) <HTSLiveSaaSGameBottomMessageReaction> reaction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addGameBottomMessage:;
- (void)addGameBottomSpecalMessage:;
- (void)changeShowingState:;
- (void)checkNodeQueue;
- (void)didSetAttachingDIContext;
- (BOOL)isGameMessageShowing;
- (void)setIsGameMessageShowing:;
- (void)setUp;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)messageReceived:;
- (id)reaction;
- (id)nodeQueue;
- (void)setNodeQueue:;
- (void)setReaction:;
@end
