@interface AWESearchAIGCInputAgentActionCreateInfo : AWEBaseApiModel
@property (nonatomic) NSString panelTitle;
@property (nonatomic) NSArray genreList;
- (id)panelTitle;
- (void)setPanelTitle:;
- (id)genreList;
- (void)setGenreList:;
- (void).cxx_destruct;
+ (id)genreListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
