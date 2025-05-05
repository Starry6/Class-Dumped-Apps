@interface NWPBBrowseDescriptor : PBCodable
@property (nonatomic) BOOL hasService;
@property (nonatomic) NWPBServiceBrowse service;
- (void)setService:;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)service;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasService;
@end
