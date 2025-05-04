@interface AWEVideoPlayDanmakuSendResponseModel : AWEBaseApiModel
@property (nonatomic) NSString danmakuId;
@property (nonatomic) NSString text;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString statusmsg;
@property (nonatomic) q statuscode;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)danmakuId;
- (void)setDanmakuId:;
- (long long)statuscode;
- (void)setStatuscode:;
- (id)statusmsg;
- (void)setStatusmsg:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
