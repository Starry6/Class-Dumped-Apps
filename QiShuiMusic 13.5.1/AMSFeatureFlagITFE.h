@interface AMSFeatureFlagITFE : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL readonly;
@property (nonatomic) NSString value;
- (void)setReadonly:;
- (id)initWithValue:isEnabled:isMutable:;
- (unsigned long long)hash;
- (void)toggle:;
- (BOOL)isReadonly;
- (void)setValue:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:;
- (BOOL)isEnabled;
+ (id)_flagGroupITFEs;
+ (id)_mutableITFEs;
+ (id)_profileITFEs;
+ (id)_customITFEs;
+ (void)setMutableFeatureName:toValue:;
+ (id)_remoteGroupITFEs;
+ (void)verifyOrphansForGroups:;
+ (void)resetFeatures;
+ (id)fetchProfileFeatures;
+ (void)removeOrphanITFEValues:;
+ (void)verifyOrphans;
+ (BOOL)_isITFEValueCustom:;
+ (id)_concreteITFEs;
+ (id)fetchMutableFeatures;
+ (id)fetchCustomFeatures;
@end
