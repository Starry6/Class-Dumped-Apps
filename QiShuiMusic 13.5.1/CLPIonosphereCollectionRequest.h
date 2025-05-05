@interface CLPIonosphereCollectionRequest : PBRequest
@property (nonatomic) BOOL hasMeta;
@property (nonatomic) CLPMeta meta;
@property (nonatomic) NSMutableArray ionoDatas;
- (id)meta;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setMeta:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasMeta;
- (void)clearIonoDatas;
- (void)addIonoData:;
- (unsigned long long)ionoDatasCount;
- (id)ionoDataAtIndex:;
- (id)ionoDatas;
- (void)setIonoDatas:;
+ (Class)ionoDataType;
@end
