@interface AWEStory24CoverModel : MTLModel
@property (nonatomic) NSString awemeID;
@property (nonatomic) q createTime;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) q awemeType;
@property (nonatomic) NSString userID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)awemeType;
- (id)cover;
- (void)setCover:;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setAwemeType:;
- (id)userID;
- (long long)createTime;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
