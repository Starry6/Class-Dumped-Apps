@interface CLPLOGENTRYVISIONSimdDoubleMxN : PBCodable
@property (nonatomic) NSMutableArray columns;
- (id)columns;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (void)setColumns:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)columnsCount;
- (void)clearColumns;
- (void)addColumns:;
- (id)columnsAtIndex:;
+ (Class)columnsType;
@end
