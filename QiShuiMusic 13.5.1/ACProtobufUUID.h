@interface ACProtobufUUID : PBCodable
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString value;
- (id)initWithUUID:;
- (id)uuid;
- (void)writeTo:;
- (void)setUuid:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
