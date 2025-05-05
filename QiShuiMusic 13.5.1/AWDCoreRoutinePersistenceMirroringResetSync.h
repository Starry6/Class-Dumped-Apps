@interface AWDCoreRoutinePersistenceMirroringResetSync : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSInteger reason;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) NSInteger code;
- (void)setHasCode:;
- (void)writeTo:;
- (int)code;
- (int)reason;
- (unsigned long long)hash;
- (void)setReason:;
- (void)copyTo:;
- (BOOL)hasReason;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setHasReason:;
- (BOOL)hasCode;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setCode:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
