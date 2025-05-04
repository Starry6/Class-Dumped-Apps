@interface AWESearchSynthesisNovelChapterSelectorFragment : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q from;
@property (nonatomic) q to;
@property (nonatomic) NSString url;
@property (nonatomic) NSArray chapterList;
- (id)chapterList;
- (void)setChapterList:;
- (id)initWithUrl:title:from:to:;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setFrom:;
- (long long)from;
- (void)setTo:;
- (long long)to;
@end
