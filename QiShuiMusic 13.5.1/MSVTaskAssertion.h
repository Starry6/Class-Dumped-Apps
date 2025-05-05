@interface MSVTaskAssertion : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL valid;
@property (nonatomic) NSString name;
@property (nonatomic) @? invalidationHandler;
- (id)init;
- (void)dealloc;
- (BOOL)acquire;
- (id)initWithName:pid:subsystem:reason:flags:;
- (unsigned int)_BSKReasonForMSVReason:;
- (id)initWithName:pid:bundleID:subsystem:reason:flags:;
- (void)invalidateOnDate:;
- (id)_initWithName:bundleID:pid:subsystem:reason:flags:;
- (void)_cancelInvalidationTimerWithCompletion:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithName:bundleID:subsystem:reason:flags:;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)description;
- (id)name;
- (BOOL)isAcquired;
- (id)bundleID;
- (void)invalidate;
- (unsigned int)_BSKFlagsForMSVFlags:;
@end
