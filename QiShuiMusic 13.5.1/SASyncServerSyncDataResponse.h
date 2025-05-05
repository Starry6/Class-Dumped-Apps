@interface SASyncServerSyncDataResponse : SABaseClientBoundCommand
@property (nonatomic) NSString assistantId;
@property (nonatomic) q batchNumber;
@property (nonatomic) NSArray dataBatch;
@property (nonatomic) BOOL lastBatch;
@property (nonatomic) NSString responseCode;
@property (nonatomic) NSString serverGeneration;
@property (nonatomic) NSString syncType;
- (id)groupIdentifier;
- (id)responseCode;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setResponseCode:;
- (id)assistantId;
- (void)setAssistantId:;
- (id)syncType;
- (void)setSyncType:;
- (long long)batchNumber;
- (void)setBatchNumber:;
- (id)dataBatch;
- (void)setDataBatch:;
- (BOOL)lastBatch;
- (void)setLastBatch:;
- (id)serverGeneration;
- (void)setServerGeneration:;
@end
