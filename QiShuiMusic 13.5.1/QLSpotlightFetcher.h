@interface QLSpotlightFetcher : QLItemFetcher
@property (nonatomic) QLSpotlightSearchableItemInfo info;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)itemSize;
- (void).cxx_destruct;
- (id)info;
- (void)fetchContentWithAllowedOutputClasses:inQueue:updateBlock:completionBlock:;
- (BOOL)isLongFetchOperation;
- (id)initWithSearchableItemUniqueIdentifier:queryString:applicationBundleIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
