@interface GEOTimeToLeaveMapLaunch : PBCodable
@property (nonatomic) BOOL hasMinutesUntilEvent;
@property (nonatomic) double minutesUntilEvent;
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
- (double)minutesUntilEvent;
- (void)setMinutesUntilEvent:;
- (void)setHasMinutesUntilEvent:;
- (BOOL)hasMinutesUntilEvent;
+ (BOOL)isValid:;
@end
