@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSString version;
@property (nonatomic) NSMutableArray entityMapElements;
- (void)setVersion:;
- (id)version;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasVersion;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearEntityMapElements;
- (void)addEntityMapElements:;
- (unsigned long long)entityMapElementsCount;
- (id)entityMapElementsAtIndex:;
- (id)entityMapElements;
- (void)setEntityMapElements:;
+ (Class)entityMapElementsType;
@end
