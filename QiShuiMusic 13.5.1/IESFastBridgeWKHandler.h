@interface IESFastBridgeWKHandler : NSObject
@property (nonatomic) IESBridgeEngine_Deprecated bridgeEngine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeEngine;
- (id)initWithBridgeEngine:;
- (void)setBridgeEngine:;
- (void).cxx_destruct;
- (void)userContentController:didReceiveScriptMessage:;
@end
