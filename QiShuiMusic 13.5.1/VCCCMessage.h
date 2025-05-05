@interface VCCCMessage : PBCodable
@property (nonatomic) Q transactionID;
@property (nonatomic) NSString topic;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) NSData payload;
- (unsigned long long)transactionID;
- (id)payload;
- (void)dealloc;
- (void)setTopic:;
- (void)setPayload:;
- (BOOL)hasPayload;
- (void)writeTo:;
- (void)setTransactionID:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)topic;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
