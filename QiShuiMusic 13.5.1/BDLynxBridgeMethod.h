@interface BDLynxBridgeMethod : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) @? sessionHandler;
@property (nonatomic) NSString namescope;
@property (nonatomic) NSString methodName;
- (id)initWithMethodName:handler:sessionHandler:namescope:;
- (id)namescope;
- (id)handler;
- (void).cxx_destruct;
- (id)sessionHandler;
- (id)methodName;
@end
