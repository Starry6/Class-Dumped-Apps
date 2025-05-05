@interface STUsageDetailItem : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isAllAppsOrCategories;
@property (nonatomic) q type;
@property (nonatomic) float quantity;
@property (nonatomic) float sortQuantity;
@property (nonatomic) BOOL usageTrusted;
- (void)setQuantity:;
- (id)identifier;
- (void)setType:;
- (unsigned long long)hash;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithType:identifier:;
- (BOOL)isEqual:;
- (float)quantity;
- (BOOL)usageTrusted;
- (id)initWithType:identifier:usageTrusted:;
- (BOOL)isAllAppsOrCategories;
- (float)sortQuantity;
+ (id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+ (id)keyPathsForValuesAffectingSortQuantity;
@end
