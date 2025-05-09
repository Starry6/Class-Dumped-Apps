@interface AWEIMDouyinRedPacketYapmentInfoModel : AWEBaseApiModel
@property (nonatomic) q amount;
@property (nonatomic) q singleAmount;
@property (nonatomic) q count;
@property (nonatomic) q receiveCount;
@property (nonatomic) Q redPacketType;
@property (nonatomic) Q redPacketSubtype;
@property (nonatomic) NSString statusDesc;
@property (nonatomic) NSString yapmentUrl;
@property (nonatomic) NSString orderId;
@property (nonatomic) NSString redPacketId;
@property (nonatomic) NSString yapUrlType;
@property (nonatomic) NSString clientMessageId;
- (id)orderId;
- (void)setOrderId:;
- (void)setSingleAmount:;
- (long long)singleAmount;
- (id)clientMessageId;
- (id)statusDesc;
- (void)setStatusDesc:;
- (void)setClientMessageId:;
- (id)redPacketId;
- (void)setRedPacketId:;
- (id)yapmentUrl;
- (id)yapUrlType;
- (unsigned long long)redPacketType;
- (long long)receiveCount;
- (void)setRedPacketType:;
- (void)setReceiveCount:;
- (unsigned long long)redPacketSubtype;
- (void)setRedPacketSubtype:;
- (void)setYapmentUrl:;
- (void)setYapUrlType:;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (long long)amount;
- (void)setAmount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
