@interface BMPBSiriPrivateLearningSELFEvent : PBCodable
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasUniqueId;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) BOOL hasEventData;
@property (nonatomic) NSData eventData;
- (void)setAbsoluteTimestamp:;
- (id)uniqueId;
- (void)setHasAbsoluteTimestamp:;
- (BOOL)hasUniqueId;
- (BOOL)hasAbsoluteTimestamp;
- (void)setUniqueId:;
- (void)writeTo:;
- (double)absoluteTimestamp;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventData;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasEventData;
- (void)setEventData:;
@end
