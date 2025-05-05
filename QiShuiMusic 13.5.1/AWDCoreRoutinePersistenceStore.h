@interface AWDCoreRoutinePersistenceStore : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasMigratorFailed;
@property (nonatomic) BOOL migratorFailed;
@property (nonatomic) BOOL hasMigratorDestroyedStoreReason;
@property (nonatomic) NSInteger migratorDestroyedStoreReason;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMigratorFailed:;
- (void)setHasMigratorFailed:;
- (BOOL)hasMigratorFailed;
- (void)setMigratorDestroyedStoreReason:;
- (void)setHasMigratorDestroyedStoreReason:;
- (BOOL)hasMigratorDestroyedStoreReason;
- (BOOL)migratorFailed;
- (int)migratorDestroyedStoreReason;
@end
