@interface FPEnumerationSettings : NSObject
@property (nonatomic) NSArray sortDescriptors;
@property (nonatomic) NSFileProviderSearchQuery searchQuery;
- (void)setSortDescriptors:;
- (id)sortDescriptors;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)searchQuery;
- (void)setSearchQuery:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
