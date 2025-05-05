@interface AWDCoreRoutineHintSourceUsageInstance : PBCodable
@property (nonatomic) BOOL hasHintSource;
@property (nonatomic) NSInteger hintSource;
@property (nonatomic) BOOL hasIsLOI;
@property (nonatomic) NSInteger isLOI;
@property (nonatomic) BOOL hasIsVisit;
@property (nonatomic) NSInteger isVisit;
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
- (void)setIsLOI:;
- (void)setHasIsLOI:;
- (BOOL)hasIsLOI;
- (void)setIsVisit:;
- (void)setHasIsVisit:;
- (BOOL)hasIsVisit;
- (int)isLOI;
- (int)isVisit;
@end
