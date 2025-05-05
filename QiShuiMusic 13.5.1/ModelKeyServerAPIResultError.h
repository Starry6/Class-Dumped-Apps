@interface ModelKeyServerAPIResultError : PBCodable
@property (nonatomic) BOOL hasMessage;
@property (nonatomic) NSString message;
- (void)setMessage:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)message;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasMessage;
@end
