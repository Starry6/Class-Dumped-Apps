@interface GEOTransitRegionAlert : PBCodable
@property (nonatomic) BOOL hasBanner;
@property (nonatomic) GEOTransitBanner banner;
@property (nonatomic) NSMutableArray triggerRegions;
@property (nonatomic) PBUnknownFields unknownFields;
- (id)banner;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setBanner:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasBanner;
- (id)triggerRegions;
- (void)setTriggerRegions:;
- (void)clearTriggerRegions;
- (void)addTriggerRegion:;
- (unsigned long long)triggerRegionsCount;
- (id)triggerRegionAtIndex:;
+ (BOOL)isValid:;
+ (Class)triggerRegionType;
@end
