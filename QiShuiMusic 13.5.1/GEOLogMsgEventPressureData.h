@interface GEOLogMsgEventPressureData : PBCodable
@property (nonatomic) BOOL hasPressureData;
@property (nonatomic) NSData pressureData;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (BOOL)hasPressureData;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)pressureData;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setPressureData:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
