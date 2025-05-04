@interface AWEIMDouyinRedPacketCoverManagerResponse : AWEBaseApiModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) AWEIMDouyinRedPacketCoverModel coverInfo;
@property (nonatomic) q recvStatus;
- (id)coverInfo;
- (void)setCoverInfo:;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (long long)recvStatus;
- (void)setRecvStatus:;
- (unsigned long long)getReceiveStatus;
- (void).cxx_destruct;
+ (id)coverInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
