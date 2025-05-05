@interface DMFFetchApplicationsRequest : DMFTaskRequest
@property (nonatomic) BOOL excludeIcon;
@property (nonatomic) BOOL excludeUnmanagedApps;
@property (nonatomic) BOOL deleteFeedback;
@property (nonatomic) Q typeFilter;
@property (nonatomic) Q stateFilter;
@property (nonatomic) NSArray bundleIdentifiers;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (void)setBundleIdentifiers:;
- (BOOL)excludeIcon;
- (void)setExcludeIcon:;
- (BOOL)excludeUnmanagedApps;
- (void)setExcludeUnmanagedApps:;
- (BOOL)deleteFeedback;
- (void)setDeleteFeedback:;
- (unsigned long long)typeFilter;
- (void)setTypeFilter:;
- (unsigned long long)stateFilter;
- (void)setStateFilter:;
+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
@end
