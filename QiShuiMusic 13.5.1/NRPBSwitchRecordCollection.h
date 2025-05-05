@interface NRPBSwitchRecordCollection : PBCodable
@property (nonatomic) NSMutableArray records;
- (id)records;
- (void)setRecords:;
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
- (void)clearRecords;
- (void)addRecords:;
- (unsigned long long)recordsCount;
- (id)recordsAtIndex:;
+ (Class)recordsType;
@end
