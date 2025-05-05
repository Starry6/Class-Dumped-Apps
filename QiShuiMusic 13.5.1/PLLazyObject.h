@interface PLLazyObject : NSObject
@property (nonatomic) @ objectValue;
@property (nonatomic) @ currentObjectValueWithoutForcingEvaluation;
- (id)init;
- (id)objectValue;
- (id)initWithBlock:;
- (id)initWithObject:;
- (void)resetObject;
- (id)currentObjectValueWithoutForcingEvaluation;
- (void)invalidateWithHandler:;
- (void).cxx_destruct;
- (id)initWithRetriableBlock:;
- (void)resetObjectWithHandler:;
- (void)invalidate;
- (id)initWithRetry:block:;
@end
