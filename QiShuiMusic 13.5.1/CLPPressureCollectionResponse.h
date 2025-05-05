@interface CLPPressureCollectionResponse : PBCodable
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasMsg;
@property (nonatomic) NSString msg;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)success;
- (void)setSuccess:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasMsg;
- (id)msg;
- (void)setMsg:;
@end
