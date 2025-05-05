@interface WBSAnalyticsSafariPageLoadStartedEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasConfigurationID;
@property (nonatomic) Q configurationID;
@property (nonatomic) BOOL hasPageID;
@property (nonatomic) Q pageID;
- (void)setConfigurationID:;
- (unsigned long long)configurationID;
- (void)setPageID:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)pageID;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasConfigurationID:;
- (BOOL)hasConfigurationID;
- (void)setHasPageID:;
- (BOOL)hasPageID;
@end
