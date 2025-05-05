@interface GEOLogMsgEventMapKitCounts : PBCodable
@property (nonatomic) NSMutableArray mapKitCounts;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setMapKitCounts:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)mapKitCounts;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearMapKitCounts;
- (void)addMapKitCounts:;
- (unsigned long long)mapKitCountsCount;
- (id)mapKitCountsAtIndex:;
+ (BOOL)isValid:;
+ (Class)mapKitCountsType;
@end
