@interface AWEPOIContentScoreInfoModel : MTLModel
@property (nonatomic) NSString score;
@property (nonatomic) NSString scoreText;
@property (nonatomic) NSString scoreContent;
@property (nonatomic) NSArray scoreIconList;
@property (nonatomic) NSArray scoreIconUrlList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scoreText;
- (void)setScoreText:;
- (id)scoreContent;
- (void)setScoreContent:;
- (id)scoreIconList;
- (void)setScoreIconList:;
- (id)scoreIconUrlList;
- (void)setScoreIconUrlList:;
- (void)setScore:;
- (id)score;
- (void).cxx_destruct;
+ (id)scoreIconListJSONTransformer;
+ (id)scoreIconUrlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
