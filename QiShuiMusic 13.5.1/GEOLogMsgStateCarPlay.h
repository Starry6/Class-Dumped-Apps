@interface GEOLogMsgStateCarPlay : PBCodable
@property (nonatomic) BOOL hasIsConnected;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL hasCarInfo;
@property (nonatomic) GEOCarInfo carInfo;
- (void)readAll:;
- (BOOL)hasCarInfo;
- (id)initWithJSON:;
- (id)carInfo;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setIsConnected:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasIsConnected:;
- (void)mergeFrom:;
- (void)setCarInfo:;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasIsConnected;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
