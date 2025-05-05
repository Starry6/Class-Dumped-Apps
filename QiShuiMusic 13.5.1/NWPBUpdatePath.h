@interface NWPBUpdatePath : PBCodable
@property (nonatomic) BOOL hasResponsePath;
@property (nonatomic) NWPBPath responsePath;
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
- (BOOL)hasResponsePath;
- (id)responsePath;
- (void)setResponsePath:;
@end
