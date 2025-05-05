@interface CKDistributedTimestampSparseVector : NSObject
@property (nonatomic) NSMutableDictionary clockValues;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)intersectVector:;
- (void)unionVector:;
- (id)clockValuesForSiteIdentifier:;
- (unsigned long long)timestampCount;
- (id)allSiteIdentifiers;
- (void)minusVector:;
- (id)clockValues;
- (unsigned long long)timestampCountForSiteIdentifier:;
- (void)addClockValuesInIndexSet:forSiteIdentifier:;
- (void)removeClockValuesInIndexSet:forSiteIdentifier:;
- (id)vectorFilteredBySiteIdentifiers:;
- (id)vectorFilteredByModifier:;
- (void)setClockValues:;
+ (BOOL)supportsSecureCoding;
@end
