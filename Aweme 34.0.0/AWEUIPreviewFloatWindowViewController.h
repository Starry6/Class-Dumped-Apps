@interface AWEUIPreviewFloatWindowViewController : UIViewController
@property (nonatomic) AWEUIPreviewDraggableView draggableView;
@property (nonatomic) BOOL isInPreview;
- (void)closeButtonDidClick;
- (void)setDraggableView:;
- (void)previewButtonDidClick;
- (void)viewDidLoad;
- (id)draggableView;
- (void).cxx_destruct;
- (void)setIsInPreview:;
- (BOOL)isInPreview;
@end
