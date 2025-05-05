@interface IESECPBMessageExtra : NSObject
@property (nonatomic) q logicClock;
@property (nonatomic) NSString msgId;
@property (nonatomic) IESECTraceTimeMetric metric;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSNumber targetRoomID;
@property (nonatomic) # generalMessageClass;
- (Class)generalMessageClass;
- (long long)logicClock;
- (void)setGeneralMessageClass:;
- (void)setLogicClock:;
- (void)setTargetRoomID:;
- (id)targetRoomID;
- (void)setContentType:;
- (id)contentType;
- (void).cxx_destruct;
- (void)setMetric:;
- (id)description;
- (id)metric;
- (id)msgId;
- (void)setMsgId:;
@end
