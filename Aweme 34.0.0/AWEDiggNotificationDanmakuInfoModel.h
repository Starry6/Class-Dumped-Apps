@interface AWEDiggNotificationDanmakuInfoModel : AWEBaseApiModel
@property (nonatomic) NSString danmakuId;
@property (nonatomic) double offset;
@property (nonatomic) q status;
- (id)danmakuId;
- (void)setDanmakuId:;
- (void)setStatus:;
- (void)setOffset:;
- (double)offset;
- (void).cxx_destruct;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
