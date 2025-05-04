@interface AWEPublishMessageBridgeSubsriber : NSObject
@property (nonatomic) NSMutableSet reactIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didBeginWithInfo:;
- (void)task:didEndWithResult:error:;
- (void)task:progressDidChangeWithInfo:;
- (void)task:cancelWithResult:;
- (id)p_reactIDWithTask:;
- (id)reactIDs;
- (void)sendEventWithTask:params:;
- (void)setReactIDs:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)subsribe;
+ (id)shared;
@end
