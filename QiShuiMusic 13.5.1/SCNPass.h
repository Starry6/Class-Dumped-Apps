@interface SCNPass : NSObject
@property (nonatomic) @? initializationHandler;
@property (nonatomic) @? executionHandler;
- (void)dealloc;
- (void)invalidate;
- (void)setValue:forPassPropertyKey:;
- (void)setExecutionHandler:;
- (id)initWithFXPass:technique:;
- (void)setInitializationHandler:;
- (id)initializationHandler;
- (id)executionHandler;
- (id)valueForPassPropertyKey:;
@end
