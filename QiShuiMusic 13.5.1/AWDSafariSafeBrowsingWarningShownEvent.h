@interface AWDSafariSafeBrowsingWarningShownEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasProvider;
@property (nonatomic) NSInteger provider;
- (void)setProvider:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (int)provider;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasProvider:;
- (BOOL)hasProvider;
- (id)providerAsString:;
- (int)StringAsProvider:;
@end
