@interface ACProtobufURL : PBCodable
@property (nonatomic) NSURL url;
@property (nonatomic) NSString value;
- (id)url;
- (id)initWithURL:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setUrl:;
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
