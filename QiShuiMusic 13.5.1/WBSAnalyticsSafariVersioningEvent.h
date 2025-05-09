@interface WBSAnalyticsSafariVersioningEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSString version;
@property (nonatomic) BOOL hasVariant;
@property (nonatomic) NSInteger variant;
- (void)setVersion:;
- (void)setVariant:;
- (id)version;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasVersion;
- (int)variant;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasVariant:;
- (BOOL)hasVariant;
- (id)variantAsString:;
- (int)StringAsVariant:;
@end
