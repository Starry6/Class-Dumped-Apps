@interface PIAWorkerBridgeModule : NSObject
@property (nonatomic) PIAWorkerMessagePort port;
@property (nonatomic) PIAContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getHref;
- (id)getBridgeMessage;
- (id)getGlobalProps;
- (id)getUserAgent;
- (id)getWorkerName;
- (void)importScriptsAsync:resolve:reject:;
- (id)initWithParam:;
- (void)log:level:;
- (void)onReceivedWorkerMessage:;
- (void)postBridgeMessage:;
- (void)terminate;
- (id)context;
- (id)port;
- (void)setPort:;
- (void)trace:;
- (void)callback:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)getMessage;
+ (id)methodLookup;
+ (id)name;
@end
