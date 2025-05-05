@interface IESLiveMessageReplyTreeTableView : UITableView
@property (nonatomic) BOOL alreadyScrollToSourcePath;
@property (nonatomic) NSIndexPath sourceNodePath;
- (BOOL)alreadyScrollToSourcePath;
- (void)setAlreadyScrollToSourcePath:;
- (void)setSourceNodePath:;
- (id)sourceNodePath;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
