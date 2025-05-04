@interface AWEMinorRelatedSearchModel : MTLModel
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString prefixTitle;
@property (nonatomic) AWEMinorRelatedSearchWordModel queryWord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)queryWord;
- (void)setQueryWord:;
- (void)setPrefixTitle:;
- (id)prefixTitle;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
+ (id)queryWordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
