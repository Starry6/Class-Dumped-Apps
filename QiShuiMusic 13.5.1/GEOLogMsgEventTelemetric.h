@interface GEOLogMsgEventTelemetric : PBCodable
@property (nonatomic) NSMutableArray telemetricEntitys;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)telemetricEntitys;
- (void)setTelemetricEntitys:;
- (void)clearTelemetricEntitys;
- (void)addTelemetricEntity:;
- (unsigned long long)telemetricEntitysCount;
- (id)telemetricEntityAtIndex:;
+ (BOOL)isValid:;
+ (Class)telemetricEntityType;
@end
