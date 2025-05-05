@interface PIANSRExecuteConfiguration : NSObject
@property (nonatomic) BOOL reuse;
@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) q expires;
@property (nonatomic) NSString customUserAgent;
@property (nonatomic) TTBridgeRegister bridgeRegister;
@property (nonatomic) IESBridgeEngine iesBridgeEngine;
@property (nonatomic) @? completion;
- (id)iesBridgeEngine;
- (id)bridgeRegister;
- (BOOL)reuse;
- (void)setBridgeRegister:;
- (void)setIesBridgeEngine:;
- (void)setReuse:;
- (id)completion;
- (void)setCompletion:;
- (void)setCustomUserAgent:;
- (long long)expires;
- (BOOL)forceUpdate;
- (id)customUserAgent;
- (void).cxx_destruct;
- (void)setExpires:;
- (void)setForceUpdate:;
@end
