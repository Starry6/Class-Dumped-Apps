@interface AWEYAPBridgeFakeTTEngine : NSObject
@property (nonatomic) UIViewController sourceController;
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSObject sourceObject;
@property (nonatomic) TTBridgeRegister bridgeRegister;
@property (nonatomic) <TTBridgeAuthorization> authorization;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeRegister;
- (id)sourceController;
- (id)sourceURL;
- (id)authorization;
- (void)setAuthorization:;
- (void).cxx_destruct;
- (id)sourceObject;
@end
