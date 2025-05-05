@interface SBSAccessibilityWindowHostingController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)registerWindowWithContextID:atLevel:;
- (void)unregisterWindowWithContextID:;
- (id)_connectionQueue_connection;
- (void)_connectionQueue_handleInterruption;
@end
