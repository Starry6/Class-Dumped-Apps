@interface SPISELFMessageBuilder : NSObject
@property (nonatomic) POWSchemaProvisionalPOWClientEvent powClientEventMsg;
@property (nonatomic) POWSchemaProvisionalPOWUsage usageMsg;
@property (nonatomic) POWSchemaProvisionalPOWProcessUsage procUsageMsg;
@property (nonatomic) SISchemaInstrumentationMessage eventContextMsg;
- (id)init;
- (void)setPowClientEventMsg:;
- (void)setEventContextMsg:;
- (void)addProcessUsage:;
- (id)buildMessage;
- (void)addContext:;
- (id)usageMsg;
- (void).cxx_destruct;
- (void)setUsageMsg:;
- (id)powClientEventMsg;
- (void)setProcUsageMsg:;
- (id)procUsageMsg;
- (void)addRequestLinkInfoForComponent:identifier:;
- (id)eventContextMsg;
- (void)addProcess:;
@end
