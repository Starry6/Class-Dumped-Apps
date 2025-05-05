@interface BDHMInnerEvent : NSObject
@property (nonatomic) NSString traceId;
@property (nonatomic) NSString eventType;
@property (nonatomic) NSDictionary infoDict;
@property (nonatomic) q phase;
@property (nonatomic) q terminatedReason;
- (void)setTerminatedReason:;
- (void)setTraceId:;
- (long long)terminatedReason;
- (long long)phase;
- (void)setPhase:;
- (id)eventType;
- (void)setEventType:;
- (id)traceId;
- (void).cxx_destruct;
- (id)infoDict;
- (void)setInfoDict:;
@end
