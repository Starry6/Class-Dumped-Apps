@interface GEOLogMsgEventTimeToLeaveInitialTravelTime : PBCodable
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) NSInteger travelTime;
- (int)travelTime;
- (void)setTravelTime:;
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
- (void)setHasTravelTime:;
- (BOOL)hasTravelTime;
- (id)travelTimeAsString:;
- (int)StringAsTravelTime:;
+ (BOOL)isValid:;
@end
