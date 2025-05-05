@interface AWDCoreRoutinePersistenceMirroringDelegate : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasMirroringDelegatePresent;
@property (nonatomic) BOOL mirroringDelegatePresent;
@property (nonatomic) BOOL hasCreationFailureReason;
@property (nonatomic) NSInteger creationFailureReason;
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
- (void)setMirroringDelegatePresent:;
- (void)setHasMirroringDelegatePresent:;
- (BOOL)hasMirroringDelegatePresent;
- (void)setCreationFailureReason:;
- (void)setHasCreationFailureReason:;
- (BOOL)hasCreationFailureReason;
- (BOOL)mirroringDelegatePresent;
- (int)creationFailureReason;
@end
