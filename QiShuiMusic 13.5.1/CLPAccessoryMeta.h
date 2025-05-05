@interface CLPAccessoryMeta : PBCodable
@property (nonatomic) BOOL hasMake;
@property (nonatomic) NSString make;
@property (nonatomic) BOOL hasModel;
@property (nonatomic) NSString model;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSString version;
- (id)model;
- (void)setModel:;
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
- (BOOL)hasModel;
- (BOOL)hasMake;
- (id)make;
- (void)setMake:;
@end
