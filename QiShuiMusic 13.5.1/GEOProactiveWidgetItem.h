@interface GEOProactiveWidgetItem : PBCodable
@property (nonatomic) BOOL hasTimeSinceStart;
@property (nonatomic) NSInteger timeSinceStart;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)timeSinceStart;
- (void)setTimeSinceStart:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasTimeSinceStart:;
- (BOOL)hasTimeSinceStart;
+ (BOOL)isValid:;
@end
