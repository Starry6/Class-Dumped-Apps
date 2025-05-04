@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPreRequestModel : NSObject
@property (nonatomic) BOOL needDelayFetch;
@property (nonatomic) AWECommentRequestExtraModel commentRequestExtraModel;
@property (nonatomic) NSString commentChannelID;
- (id)commentRequestExtraModel;
- (void)setCommentRequestExtraModel:;
- (BOOL)needDelayFetch;
- (void)setNeedDelayFetch:;
- (id)commentChannelID;
- (void)setCommentChannelID:;
- (void)touchPreRequestComments;
- (id)init;
- (void).cxx_destruct;
@end
