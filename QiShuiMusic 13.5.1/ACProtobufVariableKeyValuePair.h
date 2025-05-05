@interface ACProtobufVariableKeyValuePair : PBCodable
@property (nonatomic) NSString key;
@property (nonatomic) ACProtobufVariableValue value;
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
- (id)initWithObjectValue:forKey:;
@end
