@interface AWENearbyLifeDualLiveRoomInfo : AWEBaseApiModel
@property (nonatomic) BOOL disableFever;
@property (nonatomic) AWENearbyFeedDualAnchorInfo anchorInfo;
@property (nonatomic) AWENearbyLifeDualRoomProductInfo subtitleInfo;
@property (nonatomic) NSString title;
@property (nonatomic) AWENearbyLifeDualProductInfo productInfo;
@property (nonatomic) q liveTitleStyle;
@property (nonatomic) q titleLimitLine;
- (id)anchorInfo;
- (void)setSubtitleInfo:;
- (id)subtitleInfo;
- (void)setAnchorInfo:;
- (BOOL)disableFever;
- (void)setDisableFever:;
- (long long)liveTitleStyle;
- (void)setLiveTitleStyle:;
- (long long)titleLimitLine;
- (void)setTitleLimitLine:;
- (id)productInfo;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setProductInfo:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)anchorInfoJSONTransformer;
+ (id)productInfoJSONTransformer;
+ (id)roomProductInfoJSONTransformer;
@end
