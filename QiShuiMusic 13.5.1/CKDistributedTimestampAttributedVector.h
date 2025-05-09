@interface CKDistributedTimestampAttributedVector : NSObject
@property (nonatomic) NSMutableDictionary mutableAttributeToSparseVector;
@property (nonatomic) NSDictionary attributeToSparseVector;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)intersectVector:;
- (void)enumerateAllClockValuesUsingBlock:;
- (id)clockValuesForSiteIdentifier:;
- (unsigned long long)timestampCount;
- (id)vectorFilteredByAtomState:;
- (id)allSiteIdentifiers;
- (void)minusVector:;
- (unsigned long long)timestampCountForSiteIdentifier:;
- (void)removeClockValuesInIndexSet:forSiteIdentifier:;
- (id)vectorFilteredBySiteIdentifiers:;
- (id)vectorFilteredByModifier:;
- (id)attributeToSparseVector;
- (unsigned short)attributeForTimestamp:;
- (void)minusVector:forAttribute:;
- (void)addAllClockValuesFromVector:;
- (void)intersectAttributedVector:;
- (void)addClockValuesInIndexSet:withAttribute:forSiteIdentifier:;
- (void)_maintainInvariants;
- (void)enumerateClockValuesForSiteIdentifier:usingBlock:;
- (id)vectorWithoutAttributes;
- (id)vectorFilteredByAttribute:;
- (id)vectorWithAttributeReplacementBlock:;
- (id)descriptionWithStringSiteIdentifiers:;
- (id)descriptionWithStringSiteIdentifiers;
- (id)mutableAttributeToSparseVector;
- (void)setMutableAttributeToSparseVector:;
- (id)vectorFilteredByClockType:;
- (id)winningLWWTimestampForModifier:winningAttribute:;
- (unsigned long long)timestampCountForAtomState:;
- (id)vectorFillingInImplicitClockValuesWithAtomState:usingSiteIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
