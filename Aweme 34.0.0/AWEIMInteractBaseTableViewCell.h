@interface AWEIMInteractBaseTableViewCell : UITableViewCell
@property (nonatomic) @? notice_longPressHandlerBlock;
@property (nonatomic) UILongPressGestureRecognizer notice_longPressGestureRecognizer;
@property (nonatomic) NSDictionary notice_trackExtraParams;
@property (nonatomic) BOOL shouldUseOptimizedBgprimary;
- (void)cellWillDisplay;
- (id)notice_longPressGestureRecognizer;
- (BOOL)shouldUseOptimizedBgprimary;
- (void)triggerCellFirstShow;
- (void)setShouldUseOptimizedBgprimary:;
- (id)notice_getUpdatedTrackParams:trackName:;
- (id)notice_longPressHandlerBlock;
- (void)notice_handleLongPressGesture:;
- (void)setNotice_longPressGestureRecognizer:;
- (void)setNotice_longPressHandlerBlock:;
- (void)notice_enableLongPress:;
- (id)notice_trackExtraParams;
- (void)setNotice_trackExtraParams:;
- (void)notice_addExtraTrackParams:trackName:;
- (void)awakeFromNib;
- (void)setSelected:animated:;
@end
