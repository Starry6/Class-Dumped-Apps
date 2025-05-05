@interface PKAdornmentView : UIView
@property (nonatomic) PKStrokeSelection strokeSelection;
@property (nonatomic) PKSelectionController selectionController;
@property (nonatomic) <PKSelectionRendering> selectionRenderer;
@property (nonatomic) PKStrokeSelectionImage strokeSelectionImage;
- (id)selectionController;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (id)initWithFrame:strokeSelection:selectionController:selectionType:;
- (BOOL)containsPoint:forInputType:;
- (void)setSelectionController:;
- (id)strokeSelection;
- (void)setStrokeSelection:;
- (void)setStrokeSelectionImage:;
- (void)_liftStrokesOutOfTiledView;
- (void)_putStrokesBackIntoTiledViewAnimated:;
- (void)_hideStrokeSelectionImageView:animated:;
- (id)selectionRenderer;
- (void)setSelectionRenderer:;
- (id)strokeSelectionImage;
+ (Class)classForSelectionType:;
@end
