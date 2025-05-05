@interface CPLChangeSessionContext : NSObject
@property (nonatomic) Q estimatedInitialSizeForLocalLibrary;
@property (nonatomic) Q estimatedInitialAssetCountForLocalLibrary;
@property (nonatomic) CPLResetTracker resetTracker;
- (void)setEstimatedInitialAssetCountForLocalLibrary:;
- (void)setEstimatedInitialSizeForLocalLibrary:;
- (id)initWithCoder:;
- (unsigned long long)estimatedInitialSizeForLocalLibrary;
- (void)encodeWithCoder:;
- (void)setResetTracker:;
- (void).cxx_destruct;
- (id)resetTracker;
- (unsigned long long)estimatedInitialAssetCountForLocalLibrary;
+ (BOOL)supportsSecureCoding;
@end
