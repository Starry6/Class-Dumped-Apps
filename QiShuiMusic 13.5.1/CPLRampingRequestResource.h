@interface CPLRampingRequestResource : PBCodable
@property (nonatomic) BOOL hasResource;
@property (nonatomic) NSString resource;
@property (nonatomic) BOOL hasNumRequested;
@property (nonatomic) q numRequested;
- (void)setResource:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (id)resource;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasResource;
- (void)setNumRequested:;
- (void)setHasNumRequested:;
- (BOOL)hasNumRequested;
- (long long)numRequested;
@end
