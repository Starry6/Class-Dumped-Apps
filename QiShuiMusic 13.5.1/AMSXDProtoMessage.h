@interface AMSXDProtoMessage : PBCodable
@property (nonatomic) NSData messageData;
@property (nonatomic) BOOL hasLogKey;
@property (nonatomic) NSString logKey;
- (void)setLogKey:;
- (id)logKey;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)messageData;
- (void)setMessageData:;
- (BOOL)hasLogKey;
@end
