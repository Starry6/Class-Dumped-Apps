@interface CKDistributedTimestampClockVector : NSObject
@property (nonatomic) CKDistributedTimestampAttributedVector backingVector;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)intersectVector:;
- (void)enumerateAllClockValuesUsingBlock:;
- (void)unionVector:;
- (id)clockVector;
- (id)clockValuesForSiteIdentifier:;
- (BOOL)includesTimestamp:;
- (unsigned long long)timestampCount;
- (BOOL)isGreaterThanOrEqualToVector:;
- (id)allSiteIdentifiers;
- (void)minusVector:;
- (id)descriptionWithStringSiteIdentifiers:usingSuperscripts:;
- (unsigned long long)timestampCountForSiteIdentifier:;
- (void)addClockValuesInIndexSet:forSiteIdentifier:;
- (void)removeClockValuesInIndexSet:forSiteIdentifier:;
- (id)vectorFilteredBySiteIdentifiers:;
- (id)vectorFilteredByModifier:;
- (void)_maintainInvariants;
- (void)enumerateClockValuesForSiteIdentifier:usingBlock:;
- (id)backingVector;
- (id)allModifiers;
- (unsigned char)clockTypeForModifier:;
- (id)clockTypesForAllModifiers;
- (unsigned char)clockTypeForTimestamp:;
- (long long)compareToVector:;
- (BOOL)hasTimestampsNotInVector:;
- (unsigned char)vectorExpansionState;
- (void)addClockValuesInIndexSet:withClockType:forSiteIdentifier:;
- (void)_checkInvariantsAgainstVector:;
- (void)_checkInvariantsAgainstClockValues:withSiteIdentifier:ofType:;
- (id)vectorFilteredByClockType:;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:;
- (void)setBackingVector:;
+ (BOOL)supportsSecureCoding;
@end
