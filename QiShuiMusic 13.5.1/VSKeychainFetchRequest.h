@interface VSKeychainFetchRequest : NSObject
@property (nonatomic) VSOptional itemKind;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSArray sortDescriptors;
@property (nonatomic) Q fetchLimit;
@property (nonatomic) BOOL includesDataValues;
- (void)setFetchLimit:;
- (unsigned long long)fetchLimit;
- (void)setSortDescriptors:;
- (id)sortDescriptors;
- (id)init;
- (id)predicate;
- (id)itemKind;
- (void)setPredicate:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setItemKind:;
- (BOOL)includesDataValues;
- (void)setIncludesDataValues:;
@end
