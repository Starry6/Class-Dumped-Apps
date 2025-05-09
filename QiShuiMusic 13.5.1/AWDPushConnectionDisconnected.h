@interface AWDPushConnectionDisconnected : PBCodable
@property (nonatomic) BOOL hasGuid;
@property (nonatomic) NSString guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) I connectionType;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) NSInteger linkQuality;
@property (nonatomic) BOOL hasError;
@property (nonatomic) I error;
@property (nonatomic) BOOL hasSslError;
@property (nonatomic) I sslError;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) NSInteger genericError;
- (void)setHasGenericError:;
- (unsigned int)connectionType;
- (BOOL)hasConnectionType;
- (BOOL)hasLinkQuality;
- (void)setGenericError:;
- (BOOL)hasGenericError;
- (void)setConnectionType:;
- (void)setLinkQuality:;
- (int)linkQuality;
- (void)setHasConnectionType:;
- (BOOL)hasGuid;
- (BOOL)hasError;
- (void)dealloc;
- (int)genericError;
- (void)setError:;
- (void)setHasError:;
- (void)writeTo:;
- (unsigned int)error;
- (unsigned long long)hash;
- (void)setHasLinkQuality:;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setHasSslError:;
- (void)setTimestamp:;
- (void)setGuid:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)guid;
- (id)description;
- (BOOL)hasSslError;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned int)sslError;
- (void)setSslError:;
- (id)copyWithZone:;
@end
