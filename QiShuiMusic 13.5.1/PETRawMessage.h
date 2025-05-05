@interface PETRawMessage : PBCodable
@property (nonatomic) BOOL hasTypeId;
@property (nonatomic) I typeId;
@property (nonatomic) BOOL hasRawBytes;
@property (nonatomic) NSData rawBytes;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
- (id)rawBytes;
- (BOOL)hasTypeId;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setTypeId:;
- (unsigned int)typeId;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasRawBytes;
- (id)name;
- (void)setRawBytes:;
- (id)dictionaryRepresentation;
- (void)setHasTypeId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
