@interface AWELiveLocalLifeProductRewardTaskInfoModel : MTLModel
@property (nonatomic) AWELiveLocalLifeProductRewardTaskColorModel bgColorModel;
@property (nonatomic) AWEURLModel iconImageURL;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgColorModel;
- (void)setBgColorModel:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)iconImageURL;
- (void)setIconImageURL:;
+ (id)iconImageURLJSONTransformer;
+ (id)bgColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
