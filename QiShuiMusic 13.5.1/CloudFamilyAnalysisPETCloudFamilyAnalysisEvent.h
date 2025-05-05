@interface CloudFamilyAnalysisPETCloudFamilyAnalysisEvent : PBCodable
@property (nonatomic) NSString collectionId;
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSInteger batch;
@property (nonatomic) CloudFamilyAnalysisPETContactEvents contactEvents;
- (void)setSessionId:;
- (id)sessionId;
- (int)batch;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setBatch:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)collectionId;
- (void)setCollectionId:;
- (id)contactEvents;
- (void)setContactEvents:;
@end
