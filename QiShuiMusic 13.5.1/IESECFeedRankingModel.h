@interface IESECFeedRankingModel : MTLModel
@property (nonatomic) NSString ID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString rankingDescription;
@property (nonatomic) IESECURLModel coverURL;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString typeText;
@property (nonatomic) IESECURLModel typeIconImageURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rankingDescription;
- (void)setRankingDescription:;
- (void)setTypeIconImageURL:;
- (void)setTypeText:;
- (id)typeIconImageURL;
- (id)typeText;
- (void)setID:;
- (id)ID;
- (void)setScheme:;
- (id)scheme;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
