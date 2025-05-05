@interface GEOLogMsgStateActionButtonDetails : PBCodable
@property (nonatomic) NSMutableArray actionButtonDetails;
- (void)readAll:;
- (id)initWithJSON:;
- (id)actionButtonDetails;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setActionButtonDetails:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearActionButtonDetails;
- (void)addActionButtonDetails:;
- (unsigned long long)actionButtonDetailsCount;
- (id)actionButtonDetailsAtIndex:;
+ (BOOL)isValid:;
+ (Class)actionButtonDetailsType;
@end
