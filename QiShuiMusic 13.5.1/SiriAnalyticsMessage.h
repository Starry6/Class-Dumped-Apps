@interface SiriAnalyticsMessage : NSObject
@property (nonatomic) SiriAnalyticsLogicalTimeStamp logicalTimestamp;
@property (nonatomic) SISchemaTopLevelUnionType underlyingMessage;
- (void).cxx_destruct;
- (id)underlyingMessage;
- (id)logicalTimestamp;
- (void)setLogicalTimestamp:;
- (void)setUnderlyingMessage:;
- (id)storageRepresentation;
@end
