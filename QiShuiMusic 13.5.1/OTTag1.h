@interface OTTag1 : PBCodable
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
- (void)setHasEnabled:;
- (BOOL)hasEnabled;
- (BOOL)enabled;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setEnabled:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
