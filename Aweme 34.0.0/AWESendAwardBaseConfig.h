@interface AWESendAwardBaseConfig : AWEBaseApiModel
@property (nonatomic) NSString sendUniqId;
@property (nonatomic) NSString spuId;
@property (nonatomic) NSString skuId;
@property (nonatomic) NSString contentID;
@property (nonatomic) NSNumber timestampP;
@property (nonatomic) NSString sign;
@property (nonatomic) NSNumber episodeRank;
@property (nonatomic) Q bizType;
- (id)sign;
- (void)setSign:;
- (unsigned long long)bizType;
- (void)setBizType:;
- (id)spuId;
- (id)skuId;
- (void)setSkuId:;
- (void)setSpuId:;
- (id)sendUniqId;
- (void)setSendUniqId:;
- (id)timestampP;
- (void)setTimestampP:;
- (id)episodeRank;
- (void)setEpisodeRank:;
- (id)contentID;
- (void).cxx_destruct;
- (void)setContentID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
