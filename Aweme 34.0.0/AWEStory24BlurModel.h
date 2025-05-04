@interface AWEStory24BlurModel : MTLModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) q status;
@property (nonatomic) NSString awemeID;
@property (nonatomic) q createTime;
@property (nonatomic) AWEURLModel blurCover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)setAwemeID:;
- (id)awemeID;
- (id)blurCover;
- (long long)createTime;
- (void)setStatus:;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (long long)status;
- (void)setBlurCover:;
+ (id)blurCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
