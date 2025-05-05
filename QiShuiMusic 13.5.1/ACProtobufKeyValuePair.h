@interface ACProtobufKeyValuePair : PBCodable
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
- (id)key;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithValue:forKey:;
@end
