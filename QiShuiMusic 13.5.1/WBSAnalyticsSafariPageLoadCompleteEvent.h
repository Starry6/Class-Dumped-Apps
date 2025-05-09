@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasConfigurationID;
@property (nonatomic) Q configurationID;
@property (nonatomic) BOOL hasPageID;
@property (nonatomic) Q pageID;
@property (nonatomic) BOOL hasPageLoadTime;
@property (nonatomic) Q pageLoadTime;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) q errorCode;
- (void)setConfigurationID:;
- (BOOL)hasErrorCode;
- (unsigned long long)configurationID;
- (void)setPageID:;
- (long long)errorCode;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
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
- (void)setPageLoadTime:;
- (void)setHasPageLoadTime:;
- (BOOL)hasPageLoadTime;
- (unsigned long long)pageLoadTime;
@end
