@interface ARRemoteControl : NSObject
@property (nonatomic) <ARControlProtocol> control;
@property (nonatomic) <ARControlProtocol> syncControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)interruptionHandler;
- (id)initWithEndpoint:;
- (void).cxx_destruct;
- (void)invalidationHandler;
- (void)invalidate;
- (id)control;
- (id)syncControl;
@end
