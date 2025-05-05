@interface SLGActivatableLogger : NSObject
@property (nonatomic) @? activationHandler;
@property (nonatomic) @? deactivationHandler;
@property (nonatomic) BOOL active;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setActive:;
- (void)invalidate;
- (id)initWithLogger:;
- (BOOL)isActive;
- (void)setActivationHandler:;
- (BOOL)isEnabled;
- (void)logBlock:domain:;
- (id)activationHandler;
- (id)deactivationHandler;
- (void)setDeactivationHandler:;
- (void)logBlock:domain:tags:;
- (void)logBlock:domain:completion:;
- (void)logBlock:domain:tags:completion:;
@end
