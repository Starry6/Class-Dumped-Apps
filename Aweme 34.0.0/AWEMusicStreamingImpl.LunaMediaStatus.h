@interface AWEMusicStreamingImpl.LunaMediaStatus : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString type;
@property (nonatomic) q status;
@property (nonatomic) _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo labelInfo;
@property (nonatomic) q riskResult;
@property (nonatomic) BOOL isLimitedPreview;
- (long long)riskResult;
- (void)setRiskResult:;
- (BOOL)isLimitedPreview;
- (void)setIsLimitedPreview:;
- (id)initWithDictionary:error:;
- (BOOL)isPlayable;
- (id)init;
- (void)setStatus:;
- (id)type;
- (id)id;
- (void)setType:;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithCoder:;
- (void)setId:;
- (id)labelInfo;
- (void)setLabelInfo:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)labelInfoJSONTransformer;
@end
