@interface AWECommentPanelListSwiftImpl.CommentPanelListCellService : NSObject
- (id)cellViewModelMap:;
- (id)newCommentFeedCellInstance;
- (id)preloadCellComponentForFirstFrame;
- (Class)newCommentFeedCellClass;
- (id)newCommentFeedCellClassIdentifier;
- (id)generateCommentNewFeedCellViewModelWithComment:maxWidth:scene:;
- (id)init;
@end
