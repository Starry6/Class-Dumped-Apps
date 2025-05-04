@interface AWESearchSynthesisNovelChapterFragment : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q number;
@property (nonatomic) NSString url;
@property (nonatomic) NSString chapterContent;
@property (nonatomic) q index;
- (void)setChapterContent:;
- (id)chapterContent;
- (id)initWithUrl:withName:withNumber:;
- (void)setIndex:;
- (long long)index;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (long long)number;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)url;
- (id)initWithCoder:;
- (void)setNumber:;
@end
