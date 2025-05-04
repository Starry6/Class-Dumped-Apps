@interface AWEIMSelectableLabelPresenter : AWEIMYYLabelPresenter
@property (nonatomic) AWEIMTextSelectable selectable;
@property (nonatomic) <AWEIMSelectableLabelAction> action;
@property (nonatomic) @? selectedStringCustomBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateView:withContext:;
- (void)setSelectedStringCustomBlock:;
- (void)didEndTextSelectWithStartLocation:lowLocation:locationInView:tryStartLocationFirst:;
- (void)didResetTextSelectWithHitPoint:pointInView:;
- (void)didStartDraggingGrabber;
- (id)selectedAttributedString;
- (BOOL)isTextPartiallySelected;
- (void)selectFullRangeInContainer:;
- (void)resetSelectable;
- (id)selectedStringCustomBlock;
- (void)setSelectable:;
- (void)setAction:;
- (id)action;
- (id)selectable;
- (void).cxx_destruct;
@end
