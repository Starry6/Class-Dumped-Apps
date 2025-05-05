@interface GEOLocationShiftRequest : PBRequest
@property (nonatomic) {GEOPixelPoint=ddi{?=b1}} pixel;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (Class)responseClass;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)pixel;
- (void)setPixel:;
+ (BOOL)isValid:;
@end
