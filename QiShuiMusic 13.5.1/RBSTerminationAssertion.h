@interface RBSTerminationAssertion : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL processExists;
- (void)removeObserver:;
- (BOOL)invalidateWithError:;
- (id)initWithPredicate:context:;
- (void)addObserver:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)acquireWithError:;
- (id)initWithTarget:context:;
- (id)initWithPredicate:context:service:;
- (BOOL)processExists;
@end
