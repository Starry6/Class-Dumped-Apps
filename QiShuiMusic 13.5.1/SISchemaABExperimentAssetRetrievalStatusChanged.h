@interface SISchemaABExperimentAssetRetrievalStatusChanged : SISchemaInstrumentationMessage
@property (nonatomic) NSString experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) NSString assetId;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) NSInteger retrievalStatusCode;
@property (nonatomic) BOOL hasRetrievalStatusCode;
@property (nonatomic) NSData jsonData;
- (id)assetId;
- (id)experimentId;
- (void)setExperimentId:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (void)setAssetId:;
- (BOOL)isEqual:;
- (BOOL)hasExperimentId;
- (BOOL)hasAssetId;
- (void)deleteExperimentId;
- (void)setHasExperimentId:;
- (void)deleteAssetId;
- (void)setRetrievalStatusCode:;
- (BOOL)hasRetrievalStatusCode;
- (void)setHasRetrievalStatusCode:;
- (void)deleteRetrievalStatusCode;
- (int)retrievalStatusCode;
- (void)setHasAssetId:;
@end
