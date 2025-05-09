@interface AWDIDSWRMLinkRecommendation : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasRecommendedLinkType;
@property (nonatomic) I recommendedLinkType;
@property (nonatomic) BOOL hasPrimaryLinkType;
@property (nonatomic) I primaryLinkType;
@property (nonatomic) BOOL hasMagnetState;
@property (nonatomic) I magnetState;
@property (nonatomic) BOOL hasInfraWiFiState;
@property (nonatomic) I infraWiFiState;
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
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)recommendedLinkType;
- (unsigned int)primaryLinkType;
- (unsigned int)magnetState;
- (unsigned int)infraWiFiState;
- (void)setRecommendedLinkType:;
- (void)setHasRecommendedLinkType:;
- (BOOL)hasRecommendedLinkType;
- (void)setPrimaryLinkType:;
- (void)setHasPrimaryLinkType:;
- (BOOL)hasPrimaryLinkType;
- (void)setMagnetState:;
- (void)setHasMagnetState:;
- (BOOL)hasMagnetState;
- (void)setInfraWiFiState:;
- (void)setHasInfraWiFiState:;
- (BOOL)hasInfraWiFiState;
@end
