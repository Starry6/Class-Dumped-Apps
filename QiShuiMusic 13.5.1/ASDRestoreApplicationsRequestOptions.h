@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions
@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createsPlaceholders;
@property (nonatomic) BOOL createAsMobileBackup;
@property (nonatomic) BOOL skipCoordinatorCompletion;
@property (nonatomic) BOOL restoreApplicationData;
@property (nonatomic) NSArray items;
- (id)items;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithApplicationMetadata:;
- (BOOL)completeDataPromise;
- (void)setCompleteDataPromise:;
- (BOOL)createsPlaceholders;
- (void)setCreatesPlaceholders:;
- (BOOL)createAsMobileBackup;
- (void)setCreateAsMobileBackup:;
- (BOOL)skipCoordinatorCompletion;
- (void)setSkipCoordinatorCompletion:;
- (BOOL)restoreApplicationData;
- (void)setRestoreApplicationData:;
+ (BOOL)supportsSecureCoding;
@end
