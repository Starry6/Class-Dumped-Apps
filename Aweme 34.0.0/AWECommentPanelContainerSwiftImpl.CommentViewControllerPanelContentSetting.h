@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPanelContentSetting : NSObject
@property (nonatomic) Q emptyStyle;
@property (nonatomic) double briefEmptyCellHeight;
- (unsigned long long)emptyStyle;
- (void)setEmptyStyle:;
- (double)briefEmptyCellHeight;
- (void)setBriefEmptyCellHeight:;
- (void)insertComment:replyID:fromNotice:;
- (void)highlightCommentWithID:;
- (void)replyWithCommentID:editingMethodType:;
- (void)replyWithCommentID:beginInputSource:editingMethodType:;
- (void)scrollTo:commentID:animated:;
- (void)scrollTo:commentID:position:animated:;
- (void)scrollToTargetComment:;
- (id)init;
- (void).cxx_destruct;
@end
