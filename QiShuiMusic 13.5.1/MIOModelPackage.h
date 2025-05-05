@interface MIOModelPackage : NSObject
@property (nonatomic) NSURL specificationURL;
- (void).cxx_destruct;
- (id)initWithModelPackageAtURL:error:;
- (id)specificationURL;
- (void)setSpecificationURL:;
+ (id)upgradeModelSpecificationAtURL:toURL:error:;
+ (BOOL)_upgradeModelSpecificationAtURL:packageURL:error:;
@end
