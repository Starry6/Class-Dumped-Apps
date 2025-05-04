@interface AWEOFGXBridgeHandler : NSObject
@property (nonatomic) AWEOFGBridge bridge;
@property (nonatomic) BDXBridgeExecutor executor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleMessage:resultHandler:;
- (id)callHandlerWithMessage:container:;
- (BOOL)useMainThreadHandleMessage:container:;
- (id)executor;
- (id)bridge;
- (void).cxx_destruct;
- (id)initWithExecutor:;
- (void)setBridge:;
- (void)setExecutor:;
@end
