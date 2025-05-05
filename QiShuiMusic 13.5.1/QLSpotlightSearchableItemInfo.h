@interface QLSpotlightSearchableItemInfo : NSObject
@property (nonatomic) NSString queryString;
@property (nonatomic) NSString searchableItemUniqueIdentifier;
@property (nonatomic) NSString applicationBundleIdentifier;
- (id)applicationBundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setApplicationBundleIdentifier:;
- (void)setQueryString:;
- (void).cxx_destruct;
- (id)queryString;
- (id)searchableItemUniqueIdentifier;
- (void)setSearchableItemUniqueIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)spotlightInfoWithUniqueIdentifier:queryString:applicationBundleIdentifier:;
@end
