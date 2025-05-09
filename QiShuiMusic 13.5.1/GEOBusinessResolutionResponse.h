@interface GEOBusinessResolutionResponse : PBCodable
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasBusinessName;
@property (nonatomic) NSString businessName;
@property (nonatomic) BOOL hasBusinessUID;
@property (nonatomic) Q businessUID;
- (void)readAll:;
- (void)setStatus:;
- (BOOL)hasStatus;
- (id)initWithJSON:;
- (id)statusAsString:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)StringAsStatus:;
- (id)copyWithZone:;
- (BOOL)hasBusinessName;
- (id)businessName;
- (void)setBusinessName:;
- (unsigned long long)businessUID;
- (void)setBusinessUID:;
- (void)setHasBusinessUID:;
- (BOOL)hasBusinessUID;
+ (BOOL)isValid:;
@end
