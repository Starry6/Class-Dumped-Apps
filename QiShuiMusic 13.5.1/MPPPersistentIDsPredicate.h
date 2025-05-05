@interface MPPPersistentIDsPredicate : PBCodable
@property (nonatomic) BOOL hasShouldContain;
@property (nonatomic) BOOL shouldContain;
@property (nonatomic) Q persistentIDsCount;
@property (nonatomic) ^q persistentIDs;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)persistentIDs;
- (BOOL)shouldContain;
- (void)setShouldContain:;
- (void)setHasShouldContain:;
- (BOOL)hasShouldContain;
- (unsigned long long)persistentIDsCount;
- (void)clearPersistentIDs;
- (void)addPersistentIDs:;
- (long long)persistentIDsAtIndex:;
- (void)setPersistentIDs:count:;
@end
