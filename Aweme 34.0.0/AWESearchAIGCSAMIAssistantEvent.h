@interface AWESearchAIGCSAMIAssistantEvent : NSObject
@property (nonatomic) q eventType;
@property (nonatomic) NSString taskID;
@property (nonatomic) AWESearchAIGCSAMIAssistantEventTTSResponse ttsResponse;
@property (nonatomic) AWESearchAIGCSAMIAssistantEventConnectionInfo connectionInfo;
@property (nonatomic) AWESearchAIGCSAMIAssistantEventErrorInfo errorInfo;
- (void)configWithBlock:;
- (long long)eventTypeWithSAMICoreEventType:;
- (id)ttsResponse;
- (id)initWithEventType:taskID:;
- (id)initWithSAMICoreEventType:withBlock:;
- (void)setTtsResponse:;
- (void)setEventType:;
- (long long)eventType;
- (id)connectionInfo;
- (id)description;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)taskID;
- (id)errorInfo;
- (void)setErrorInfo:;
- (void)setConnectionInfo:;
@end
