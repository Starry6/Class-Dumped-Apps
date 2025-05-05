@interface NADeallocationSentinel : NSObject
@property (nonatomic) @ targetObject;
@property (nonatomic) @? finalizer;
@property (nonatomic) NADeallocationTracer tracer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)tracerIsDeallocating;
- (id)initWithTargetObject:finalizer:;
- (id)targetObject;
- (id)finalizer;
- (id)tracer;
@end
