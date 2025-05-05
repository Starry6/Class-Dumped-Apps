@interface SBSSystemApertureLayoutMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void).cxx_destruct;
- (void)invalidate;
- (id)systemApertureLayoutDidChange:;
- (id)acquireRestrictSystemApertureLayoutToInertAssertionWithReason:;
@end
