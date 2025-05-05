@interface AWEIMResponseToWhoSeeMyStoryMessage : AWEIMMessage
@property (nonatomic) NSString storyComment;
@property (nonatomic) NSString storyID;
@property (nonatomic) IESIMURLModel storyCoverURL;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) BOOL syncAweme;
@property (nonatomic) {CGSize=dd} commentSize;
@property (nonatomic) AWEIMTextMessage commentTextMsg;
- (void)setCommentSize:;
- (id)storyID;
- (id)commentSize;
- (id)commentTextMsg;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setCommentTextMsg:;
- (void)setStoryComment:;
- (void)setStoryCoverURL:;
- (void)setStoryID:;
- (void)setSyncAweme:;
- (id)storyComment;
- (id)storyCoverURL;
- (BOOL)syncAweme;
- (void)setWidth:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
@end
