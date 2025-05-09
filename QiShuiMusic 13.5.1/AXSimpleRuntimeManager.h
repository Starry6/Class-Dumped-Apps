@interface AXSimpleRuntimeManager : NSObject
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL systemWideServer;
@property (nonatomic) @? parameterizedAttributeCallback;
@property (nonatomic) @? attributeCallback;
@property (nonatomic) @? setAttributeCallback;
@property (nonatomic) @? performActionCallback;
@property (nonatomic) @? clientObserverCallback;
@property (nonatomic) @? hitTestCallback;
@property (nonatomic) @? applicationElementCallback;
@property (nonatomic) @? outgoingValuePreprocessor;
- (void)setStarted:;
- (BOOL)started;
- (void)start;
- (void).cxx_destruct;
- (BOOL)systemWideServer;
- (void)setSystemWideServer:;
- (id)parameterizedAttributeCallback;
- (void)setParameterizedAttributeCallback:;
- (id)attributeCallback;
- (void)setAttributeCallback:;
- (id)setAttributeCallback;
- (void)setSetAttributeCallback:;
- (id)performActionCallback;
- (void)setPerformActionCallback:;
- (id)clientObserverCallback;
- (void)setClientObserverCallback:;
- (id)hitTestCallback;
- (void)setHitTestCallback:;
- (id)applicationElementCallback;
- (void)setApplicationElementCallback:;
- (id)outgoingValuePreprocessor;
- (void)setOutgoingValuePreprocessor:;
+ (id)sharedManager;
@end
