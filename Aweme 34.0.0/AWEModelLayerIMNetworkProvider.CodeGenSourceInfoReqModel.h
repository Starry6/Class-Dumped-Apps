@interface AWEModelLayerIMNetworkProvider.CodeGenSourceInfoReqModel : NSObject
@property (nonatomic) NSNumber messageCreateTime;
@property (nonatomic) NSNumber messageSenderUid;
@property (nonatomic) NSNumber serverMessageId;
- (id)toJSONString;
- (id)messageSenderUid;
- (id)messageCreateTime;
- (void)setMessageCreateTime:;
- (void)setMessageSenderUid:;
- (id)serverMessageId;
- (void)setServerMessageId:;
- (id)initWithMessageCreateTime:messageSenderUid:serverMessageId:;
- (id)init;
- (void).cxx_destruct;
@end
