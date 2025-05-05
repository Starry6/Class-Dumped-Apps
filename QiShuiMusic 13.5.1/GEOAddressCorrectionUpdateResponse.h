@interface GEOAddressCorrectionUpdateResponse : PBCodable
@property (nonatomic) BOOL hasRetryScheduleInDays;
@property (nonatomic) I retryScheduleInDays;
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
- (unsigned int)retryScheduleInDays;
- (void)setRetryScheduleInDays:;
- (void)setHasRetryScheduleInDays:;
- (BOOL)hasRetryScheduleInDays;
+ (BOOL)isValid:;
@end
