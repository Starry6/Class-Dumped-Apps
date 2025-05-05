@interface SFTabHoverPreviewController : NSObject
@property (nonatomic) <SFTabHoverPreviewControllerDelegate> delegate;
@property (nonatomic) UIHoverGestureRecognizer hoverRecognizer;
@property (nonatomic) BOOL enabled;
- (void)dismiss;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)updateWithItem:atLocation:;
- (void)setNeedsSnapshotUpdate;
- (void)_showHoverPreviewForItem:;
- (void)_cancelOrCloseHoverPreviewWithGracePeriod:;
- (void)_temporarilyDisableHover;
- (id)hoverRecognizer;
- (void)setHoverRecognizer:;
@end
