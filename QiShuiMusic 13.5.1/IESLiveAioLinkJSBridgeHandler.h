@interface IESLiveAioLinkJSBridgeHandler : NSObject
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldLazyCreateCallHandler:;
- (void)registerHandlerWithBridge:;
- (id)rpcChannelMessageCallHandler;
- (BOOL)shouldLazyCreateCallHandler;
@end
