@interface IESLiveCommentDraftModel : NSObject
@property (nonatomic) NSString commentDraft;
@property (nonatomic) HTSLiveUser referredUserDraft;
@property (nonatomic) NSArray atUserArrayDraft;
@property (nonatomic) IESLiveCommentPanelReplyTipModel replyTipModelDraft;
- (id)atUserArrayDraft;
- (id)commentDraft;
- (id)referredUserDraft;
- (id)replyTipModelDraft;
- (void)setAtUserArrayDraft:;
- (void)setCommentDraft:;
- (void)setReferredUserDraft:;
- (void)setReplyTipModelDraft:;
- (void).cxx_destruct;
@end
