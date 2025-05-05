@interface MPPCompoundPredicate : PBCodable
@property (nonatomic) NSMutableArray predicates;
- (void)setPredicates:;
- (id)predicates;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearPredicates;
- (void)addPredicates:;
- (unsigned long long)predicatesCount;
- (id)predicatesAtIndex:;
@end
