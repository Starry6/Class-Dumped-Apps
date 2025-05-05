@interface FPProvider : FPProviderDomain
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSURL storageURL;
@property (nonatomic) NSFileProviderDomain domain;
@property (nonatomic) NSArray supportedSortDescriptors;
@property (nonatomic) q type;
- (id)providerIdentifier;
- (id)bundleURL;
- (id)localizedName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)storageURL;
- (void).cxx_destruct;
- (id)supportedSortDescriptors;
- (id)localizedTitleForSortDescriptor:;
+ (BOOL)supportsSecureCoding;
+ (void)endMonitoringProviderChanges:;
+ (void)fetchProviderForItem:completionHandler:;
+ (id)beginMonitoringProviderChangesWithHandler:;
@end
