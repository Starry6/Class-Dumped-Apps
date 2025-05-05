@interface RBSXPCMessageContext : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
- (void)handoffToQueue:block:;
- (id)connection;
- (void).cxx_destruct;
+ (id)currentContext;
+ (void)handoffContextOnQueue:block:;
+ (void)runWithoutContext:;
@end
