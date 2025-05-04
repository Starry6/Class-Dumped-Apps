@interface AWESearchSynthesisNovelCatalogData : NSObject
@property (nonatomic) NSString bookName;
@property (nonatomic) NSString catalogUrl;
@property (nonatomic) BOOL isBookEnd;
@property (nonatomic) Q chapterCount;
@property (nonatomic) Q curIndex;
@property (nonatomic) NSString curChapterName;
@property (nonatomic) NSString curChapterID;
@property (nonatomic) AWESearchSynthesisNovelChapterListFragment chaptersInfo;
- (unsigned long long)curIndex;
- (void)setCurIndex:;
- (void)setIsBookEnd:;
- (BOOL)isBookEnd;
- (id)catalogUrl;
- (void)setCatalogUrl:;
- (id)chaptersInfo;
- (id)curChapterName;
- (void)setCurChapterName:;
- (id)curChapterID;
- (void)setCurChapterID:;
- (void)setChaptersInfo:;
- (void).cxx_destruct;
- (void)setChapterCount:;
- (unsigned long long)chapterCount;
- (id)bookName;
- (void)setBookName:;
@end
