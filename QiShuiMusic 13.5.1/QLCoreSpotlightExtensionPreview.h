@interface QLCoreSpotlightExtensionPreview : QLExtensionPreview
@property (nonatomic) NSString searchableItemUniqueIdentifier;
@property (nonatomic) NSString query;
@property (nonatomic) NSString searchableItemTitle;
@property (nonatomic) NSURL searchableItemURL;
- (void)setQuery:;
- (id)query;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)searchableItemUniqueIdentifier;
- (void)setSearchableItemUniqueIdentifier:;
- (id)initWithQuery:searchableItemURL:searchableItemTitle:searchableItemUUID:description:;
- (id)searchableItemTitle;
- (void)setSearchableItemTitle:;
- (id)searchableItemURL;
- (void)setSearchableItemURL:;
+ (BOOL)supportsSecureCoding;
@end
