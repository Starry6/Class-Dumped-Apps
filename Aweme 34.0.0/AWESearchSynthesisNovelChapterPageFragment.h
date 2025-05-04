@interface AWESearchSynthesisNovelChapterPageFragment : NSObject
@property (nonatomic) NSString chapterTitle;
@property (nonatomic) q chapterNumber;
@property (nonatomic) q pageIndex;
@property (nonatomic) NSString pageUrl;
@property (nonatomic) NSString pageContent;
@property (nonatomic) NSString nextUrl;
@property (nonatomic) NSString preUrl;
- (long long)chapterNumber;
- (void)setChapterNumber:;
- (void)setNextUrl:;
- (void)setPreUrl:;
- (id)initWithPageUrl:withContent:withNextUrl:withPreUrl:;
- (id)nextUrl;
- (id)preUrl;
- (id)pageUrl;
- (void).cxx_destruct;
- (void)setPageUrl:;
- (void)setPageIndex:;
- (long long)pageIndex;
- (void)setPageContent:;
- (id)pageContent;
- (id)chapterTitle;
- (void)setChapterTitle:;
@end
