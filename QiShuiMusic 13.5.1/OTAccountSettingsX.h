@interface OTAccountSettingsX : PBCodable
@property (nonatomic) BOOL hasTag1;
@property (nonatomic) OTTag1 tag1;
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
- (BOOL)hasTag1;
- (id)tag1;
- (void)setTag1:;
@end
