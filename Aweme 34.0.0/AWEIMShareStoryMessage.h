@interface AWEIMShareStoryMessage : AWEIMMessage
@property (nonatomic) NSString storyComment;
@property (nonatomic) NSString storyID;
@property (nonatomic) AWEURLModel storyCoverURL;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) BOOL syncAweme;
@property (nonatomic) {CGSize=dd} commentSize;
@property (nonatomic) AWEIMTextMessage commentTextMsg;
@property (nonatomic) NSString storyCoverMD5;
@property (nonatomic) AWEVideoModel videoModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoModel;
- (void)setVideoModel:;
- (id)storyID;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (void)setStoryID:;
- (id)getContentDict;
- (id)storyCoverURL;
- (id)storyCoverMD5;
- (BOOL)isUserCellType;
- (id)makeFeedMediaDisplayModel;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)isStoryVideo;
- (id)commentSize;
- (id)commentTextMsg;
- (id)storyComment;
- (BOOL)syncAweme;
- (void)setStoryComment:;
- (void)setStoryCoverURL:;
- (void)setSyncAweme:;
- (void)setCommentSize:;
- (void)setCommentTextMsg:;
- (void)setHeight:;
- (void)setWidth:;
- (long long)width;
- (void).cxx_destruct;
- (long long)height;
@end
