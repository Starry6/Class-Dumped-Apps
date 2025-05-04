@interface AWEButtonIconInfoModel : MTLModel
@property (nonatomic) NSString iconId;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) q position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)iconId;
- (void)setIconId:;
- (long long)position;
- (void).cxx_destruct;
- (void)setPosition:;
+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
