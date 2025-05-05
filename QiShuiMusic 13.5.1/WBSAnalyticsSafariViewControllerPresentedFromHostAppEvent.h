@interface WBSAnalyticsSafariViewControllerPresentedFromHostAppEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasHostAppBundleID;
@property (nonatomic) NSString hostAppBundleID;
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
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)hostAppBundleID;
- (void)setHostAppBundleID:;
- (BOOL)hasHostAppBundleID;
@end
