@interface CTCellularQoSFlow : NSObject
@property (nonatomic) Q flowId;
@property (nonatomic) Q bearerId;
@property (nonatomic) NSNumber queueSetId;
@property (nonatomic) NSNumber is5G;
@property (nonatomic) CTQoS txQos;
@property (nonatomic) CTQoS rxQos;
- (id)initWithCoder:;
- (unsigned long long)flowId;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setFlowId:;
- (id)copyWithZone:;
- (unsigned long long)bearerId;
- (void)setBearerId:;
- (id)queueSetId;
- (void)setQueueSetId:;
- (id)is5G;
- (void)setIs5G:;
- (id)txQos;
- (void)setTxQos:;
- (id)rxQos;
- (void)setRxQos:;
+ (BOOL)supportsSecureCoding;
@end
