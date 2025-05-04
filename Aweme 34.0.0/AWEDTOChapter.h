@interface AWEDTOChapter : MTLModel
@property (nonatomic) NSArray chapterDetails;
@property (nonatomic) q chapterType;
@property (nonatomic) NSString chapterAbstract;
@property (nonatomic) NSArray chapterBarColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chapterDetails;
- (void)setChapterDetails:;
- (id)chapterAbstract;
- (void)setChapterAbstract:;
- (id)chapterBarColor;
- (void)setChapterBarColor:;
- (void).cxx_destruct;
- (long long)chapterType;
- (void)setChapterType:;
+ (id)chapterDetailsJSONTransformer;
+ (id)chapterBarColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
