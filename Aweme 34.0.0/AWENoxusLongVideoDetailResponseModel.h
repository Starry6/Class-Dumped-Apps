@interface AWENoxusLongVideoDetailResponseModel : AWEBaseApiModel
@property (nonatomic) AWENoxusLongAwemeModel longAweme;
@property (nonatomic) AWENoxusCompassVideoModel campass;
- (id)campass;
- (id)longAweme;
- (void)setLongAweme:;
- (void)setCampass:;
- (void).cxx_destruct;
+ (id)videoJSONTransformer;
+ (id)longAwemeJSONTransformer;
+ (id)campassJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
