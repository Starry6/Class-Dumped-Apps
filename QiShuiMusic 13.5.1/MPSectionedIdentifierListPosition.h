@interface MPSectionedIdentifierListPosition : NSObject
@property (nonatomic) NSString sectionIdentifier;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) q entryType;
- (id)itemIdentifier;
- (long long)entryType;
- (id)sectionIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)positionForItem:inSection:;
+ (id)positionForHeadOfSection:;
+ (id)positionForTailOfSection:;
@end
