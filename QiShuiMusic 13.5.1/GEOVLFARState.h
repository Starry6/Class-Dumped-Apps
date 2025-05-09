@interface GEOVLFARState : PBCodable
@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) I relativeTimestampMs;
@property (nonatomic) BOOL hasGeoTrackingState;
@property (nonatomic) NSInteger geoTrackingState;
@property (nonatomic) BOOL hasGeoTrackingStateReason;
@property (nonatomic) NSInteger geoTrackingStateReason;
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
- (unsigned int)relativeTimestampMs;
- (void)setRelativeTimestampMs:;
- (void)setHasRelativeTimestampMs:;
- (BOOL)hasRelativeTimestampMs;
- (int)geoTrackingState;
- (void)setGeoTrackingState:;
- (void)setHasGeoTrackingState:;
- (BOOL)hasGeoTrackingState;
- (id)geoTrackingStateAsString:;
- (int)StringAsGeoTrackingState:;
- (int)geoTrackingStateReason;
- (void)setGeoTrackingStateReason:;
- (void)setHasGeoTrackingStateReason:;
- (BOOL)hasGeoTrackingStateReason;
- (id)geoTrackingStateReasonAsString:;
- (int)StringAsGeoTrackingStateReason:;
+ (BOOL)isValid:;
@end
