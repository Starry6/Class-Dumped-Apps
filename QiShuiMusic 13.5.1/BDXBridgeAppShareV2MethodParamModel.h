@interface BDXBridgeAppShareV2MethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber show_aweme_friend;
@property (nonatomic) NSDictionary link_info;
@property (nonatomic) BDXBridgeAppShareV2MediaInfo media_info;
@property (nonatomic) BDXBridgeAppShareV2CommonInfo common_info;
@property (nonatomic) NSArray platforms;
@property (nonatomic) NSDictionary log_extra;
@property (nonatomic) q type;
- (void)setCommon_info:;
- (id)common_info;
- (id)link_info;
- (id)log_extra;
- (id)media_info;
- (void)setLink_info:;
- (void)setLog_extra:;
- (void)setMedia_info:;
- (void)setPlatforms:;
- (void)setShow_aweme_friend:;
- (id)show_aweme_friend;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)platforms;
+ (id)common_infoJSONTransformer;
+ (id)media_infoJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
