@interface FBApplicationTerminationAssertionService : NSObject
@property (nonatomic) <FBApplicationTerminationAssertionServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)noteTerminationAssertionEfficacyChangedTo:forBundleIdentifier:;
- (id)terminationAssertionsForBundleID:;
- (id)terminationAssertionsForBundleID:withReason:;
- (void)_notifyDelegateOfAcquisitionForBundleID:efficacy:;
- (void)_notifyDelegateOfRelinquishForBundleID:;
- (unsigned long long)_efficacyForReason:;
- (id)_reasonForEfficacy:;
+ (id)sharedInstance;
@end
