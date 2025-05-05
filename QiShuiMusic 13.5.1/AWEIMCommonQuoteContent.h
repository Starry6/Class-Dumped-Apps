@interface AWEIMCommonQuoteContent : AWEIMCloseFriendMomentContent
@property (nonatomic) NSString commentIdString;
@property (nonatomic) NSString commentString;
@property (nonatomic) q commentContentType;
@property (nonatomic) NSString text;
@property (nonatomic) Q sceneType;
@property (nonatomic) Q refType;
- (unsigned long long)refType;
- (id)commentIdString;
- (long long)commentContentType;
- (id)commentString;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setCommentContentType:;
- (void)setCommentIdString:;
- (void)setCommentString:;
- (void)setRefType:;
- (void)setText:;
- (void).cxx_destruct;
- (id)text;
- (id)copyWithZone:;
- (unsigned long long)sceneType;
- (void)setSceneType:;
@end
