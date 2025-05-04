@interface AWEHotSearchDiscussionCellViewController : AWEAwemeDetailCellViewController
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (id)createInteractionController;
- (void)play;
- (void)stop;
- (void)pause;
@end
