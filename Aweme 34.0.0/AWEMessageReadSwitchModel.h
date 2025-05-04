@interface AWEMessageReadSwitchModel : AWEBaseApiModel
@property (nonatomic) q msgId;
@property (nonatomic) q convShortId;
@property (nonatomic) NSString convId;
@property (nonatomic) q errCode;
@property (nonatomic) NSArray onUidList;
@property (nonatomic) NSArray offUidList;
- (id)convId;
- (long long)errCode;
- (long long)convShortId;
- (void)setConvId:;
- (void)setConvShortId:;
- (void)setErrCode:;
- (id)onUidList;
- (void)setOnUidList:;
- (id)offUidList;
- (void)setOffUidList:;
- (void).cxx_destruct;
- (long long)msgId;
- (void)setMsgId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
