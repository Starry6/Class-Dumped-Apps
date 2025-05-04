@interface AWELiveInjectedJSBridgeHandler : NSObject
@property (nonatomic) AWEJSBridge aweJSBridge;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerHandlerWithBridge:;
- (void)setAweJSBridge:;
- (id)aweJSBridge;
- (void).cxx_destruct;
@end
