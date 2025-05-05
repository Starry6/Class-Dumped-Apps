@interface JSWorkerBridgeModule : NSObject
@property (nonatomic) NSString containerID;
@property (nonatomic) JSWorkerBridge bridge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)call:params:callback:;
- (id)initWithParam:;
- (void)dealloc;
- (id)containerID;
- (void)setContainerID:;
- (id)bridge;
- (void).cxx_destruct;
- (void)setBridge:;
+ (id)methodLookup;
+ (id)name;
@end
