@interface AWEMusicStreamingImpl.LunaGetUpsellsResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSString sellSubscriberType;
@property (nonatomic) NSDictionary upsellInfos;
- (id)toDic;
- (id)sellSubscriberType;
- (void)setSellSubscriberType:;
- (id)upsellInfos;
- (void)setUpsellInfos:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)upsellInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
