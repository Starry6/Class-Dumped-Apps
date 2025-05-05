@interface SiriAnalyticsTimeAnnotatedMessage : NSObject
@property (nonatomic) Q timestamp;
@property (nonatomic) NSUUID streamUUID;
@property (nonatomic) SISchemaTopLevelUnionType message;
- (void)setMessage:;
- (void)setStreamUUID:;
- (id)streamUUID;
- (void)setTimestamp:;
- (id)message;
- (void).cxx_destruct;
- (unsigned long long)timestamp;
@end
