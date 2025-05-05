@interface CLPLOGENTRYVISIONVLMatrixfMxN : PBCodable
@property (nonatomic) NSMutableArray rows;
- (void)setRows:;
- (id)rows;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearRows;
- (void)addRows:;
- (unsigned long long)rowsCount;
- (id)rowsAtIndex:;
+ (Class)rowsType;
@end
