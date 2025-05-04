@interface AWEHotSearchCommentSectionFooterModel : NSObject
@property (nonatomic) BOOL hasExpandReply;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL isVote;
@property (nonatomic) BOOL shouldEmphasis;
@property (nonatomic) NSString subCommentCountText;
@property (nonatomic) NSString sourceText;
@property (nonatomic) NSString sourceContentText;
- (BOOL)isVote;
- (BOOL)hasExpandReply;
- (id)subCommentCountText;
- (id)sourceContentText;
- (BOOL)shouldEmphasis;
- (void)setHasExpandReply:;
- (void)setIsVote:;
- (id)p_showStringFromNumber:;
- (void)setSubCommentCountText:;
- (void)setShouldEmphasis:;
- (void)setSourceContentText:;
- (id)p_descriptionStringForAweme:;
- (void)configWithCardModel:;
- (void)setHasSource:;
- (BOOL)hasSource;
- (void).cxx_destruct;
- (double)footerHeight;
- (id)sourceText;
- (void)setSourceText:;
@end
