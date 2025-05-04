@interface AWEEditChapterResponseModel : AWEBaseApiModel
@property (nonatomic) NSString chapterAbstract;
@property (nonatomic) NSArray chapterList;
@property (nonatomic) NSArray chapterBarColor;
@property (nonatomic) q chapterType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chapterList;
- (id)chapterAbstract;
- (void)setChapterAbstract:;
- (id)chapterBarColor;
- (void)setChapterBarColor:;
- (void)setChapterList:;
- (void).cxx_destruct;
- (long long)chapterType;
- (void)setChapterType:;
+ (id)chapterBarColorJSONTransformer;
+ (id)chapterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
