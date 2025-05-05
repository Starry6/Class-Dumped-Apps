@interface PSUsageBundleApp : NSObject
@property (nonatomic) <PSStorageReporting> usageBundleStorageReporter;
@property (nonatomic) NSString name;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSArray categories;
@property (nonatomic) float totalSize;
@property (nonatomic) BOOL deletionRestricted;
- (void)setCategories:;
- (id)bundleIdentifier;
- (void)setName:;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)categories;
- (id)name;
- (float)totalSize;
- (void)setUsageBundleStorageReporter:;
- (id)usageBundleStorageReporter;
- (void)setTotalSize:;
- (BOOL)isDeletionRestricted;
- (void)setDeletionRestricted:;
+ (id)usageBundleAppForBundleWithIdentifier:withTotalSize:;
+ (id)usageBundleAppForBundleWithIdentifier:withTotalSize:andCategories:;
@end
