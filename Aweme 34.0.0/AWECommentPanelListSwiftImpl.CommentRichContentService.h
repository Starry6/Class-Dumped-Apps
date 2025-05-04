@interface AWECommentPanelListSwiftImpl.CommentRichContentService : NSObject
- (id)contentViewModelForMediaFeedTitleElement:maxWidth:tapAction:;
- (void)transferToHightLightAction:params:context:;
- (id)makeCommentContentModelWithComment:;
- (id)makeCommentContentConfigWithWidth:params:tapAction:;
- (id)makeCommentContentViewModelWithModel:config:isColorWhite:expanded:;
- (id)init;
@end
