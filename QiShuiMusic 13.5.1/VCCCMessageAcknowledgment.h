@interface VCCCMessageAcknowledgment : PBCodable
@property (nonatomic) Q transactionID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) I status;
- (unsigned long long)transactionID;
- (void)setStatus:;
- (BOOL)hasStatus;
- (void)writeTo:;
- (void)setTransactionID:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (unsigned int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
