@interface EDPETBatchedWrapper : PBCodable
@property (nonatomic) BOOL hasQuotaEvent;
@property (nonatomic) EDPETQuotaReachedEvent quotaEvent;
@property (nonatomic) BOOL hasSubmittedEvent;
@property (nonatomic) EDPETSubmittedEvent submittedEvent;
@property (nonatomic) BOOL hasRawData;
@property (nonatomic) NSData rawData;
- (void)setRawData:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)rawData;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasQuotaEvent;
- (BOOL)hasSubmittedEvent;
- (BOOL)hasRawData;
- (id)quotaEvent;
- (void)setQuotaEvent:;
- (id)submittedEvent;
- (void)setSubmittedEvent:;
@end
