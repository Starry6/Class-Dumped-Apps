@interface AWENovelWelfareChapterCommentModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString avatar;
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString content;
@property (nonatomic) q score;
@property (nonatomic) NSString commentId;
- (void)setCommentId:;
- (id)commentId;
- (void)setScore:;
- (id)content;
- (void)setDesc:;
- (long long)score;
- (id)desc;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (id)initWithDict:;
- (void)setName:;
- (id)name;
- (void)setTitle:;
- (id)avatar;
- (void)setAvatar:;
@end
