@interface CKCodeProto2Any : PBCodable
@property (nonatomic) BOOL hasTypeUrl;
@property (nonatomic) NSString typeUrl;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSData value;
- (BOOL)hasValue;
- (void)writeTo:;
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
- (BOOL)hasTypeUrl;
- (id)typeUrl;
- (void)setTypeUrl:;
@end
