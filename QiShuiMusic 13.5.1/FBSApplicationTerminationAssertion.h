@interface FBSApplicationTerminationAssertion : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString reason;
@property (nonatomic) q assertionState;
- (void)dealloc;
- (id)reason;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (void)invalidate;
- (long long)assertionState;
- (id)initWithBundleID:reason:acquisitionHandler:;
+ (id)_queue;
@end
