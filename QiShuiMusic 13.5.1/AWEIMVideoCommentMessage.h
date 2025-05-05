@interface AWEIMVideoCommentMessage : AWEIMMessage
@property (nonatomic) NSString commentID;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString comment;
@property (nonatomic) IESIMURLModel videoCover;
@property (nonatomic) q mediaType;
- (id)awemeID;
- (id)commentID;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setAwemeID:;
- (void)setCommentID:;
- (void)setVideoCover:;
- (id)videoCover;
- (long long)mediaType;
- (void)setMediaType:;
- (id)comment;
- (void).cxx_destruct;
- (void)setComment:;
@end
