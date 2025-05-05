@interface GEOWiFiConnectionRoamState : PBCodable
@property (nonatomic) BOOL hasLateRoamMinRSSI;
@property (nonatomic) NSInteger lateRoamMinRSSI;
@property (nonatomic) BOOL hasLateRoamMaxRSSI;
@property (nonatomic) NSInteger lateRoamMaxRSSI;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)lateRoamMinRSSI;
- (void)setLateRoamMinRSSI:;
- (void)setHasLateRoamMinRSSI:;
- (BOOL)hasLateRoamMinRSSI;
- (int)lateRoamMaxRSSI;
- (void)setLateRoamMaxRSSI:;
- (void)setHasLateRoamMaxRSSI:;
- (BOOL)hasLateRoamMaxRSSI;
+ (BOOL)isValid:;
@end
