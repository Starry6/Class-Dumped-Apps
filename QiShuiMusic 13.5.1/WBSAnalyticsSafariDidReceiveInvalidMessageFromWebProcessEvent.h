@interface WBSAnalyticsSafariDidReceiveInvalidMessageFromWebProcessEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasMessageName;
@property (nonatomic) NSString messageName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)messageName;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasMessageName;
- (void)setMessageName:;
@end
