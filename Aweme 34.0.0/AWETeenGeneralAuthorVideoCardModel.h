@interface AWETeenGeneralAuthorVideoCardModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel author;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSMutableDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)author;
- (void).cxx_destruct;
- (void)setAuthor:;
+ (id)awemeListJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
