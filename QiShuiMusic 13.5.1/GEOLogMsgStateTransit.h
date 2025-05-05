@interface GEOLogMsgStateTransit : PBCodable
@property (nonatomic) BOOL hasTransitNotAvailableAdvisoryShowing;
@property (nonatomic) BOOL transitNotAvailableAdvisoryShowing;
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
- (BOOL)transitNotAvailableAdvisoryShowing;
- (void)setTransitNotAvailableAdvisoryShowing:;
- (void)setHasTransitNotAvailableAdvisoryShowing:;
- (BOOL)hasTransitNotAvailableAdvisoryShowing;
+ (BOOL)isValid:;
@end
