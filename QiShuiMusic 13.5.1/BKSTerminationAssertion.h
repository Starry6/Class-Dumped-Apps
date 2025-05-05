@interface BKSTerminationAssertion : BKSAssertion
@property (nonatomic) Q efficacy;
@property (nonatomic) NSString targetBundleIdentifier;
@property (nonatomic) BKSTerminationContext context;
- (id)targetBundleIdentifier;
- (BOOL)acquire;
- (id)context;
- (unsigned long long)efficacy;
- (id)initWithBundleIdentifier:efficacy:name:context:withHandler:;
- (id)initWithBundleIdentifier:efficacy:name:withHandler:;
- (unsigned long long)_bksErrorForRBSRequestError:;
- (void).cxx_destruct;
- (void)invalidate;
@end
