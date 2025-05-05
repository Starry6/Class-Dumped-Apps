@interface AWDCoreRoutineHintSourceSubmissionInstance : PBCodable
@property (nonatomic) BOOL hasHintSource;
@property (nonatomic) NSInteger hintSource;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)hintSource;
- (void)setHintSource:;
- (void)setHasHintSource:;
- (BOOL)hasHintSource;
@end
