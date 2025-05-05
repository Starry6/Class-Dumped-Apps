@interface PKDetectionView : UIView
@property (nonatomic) UIContextMenuInteraction menuInteraction;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} drawingBounds;
@property (nonatomic) {CGAffineTransform=dddddd} drawingTransform;
@property (nonatomic) PKDetectionItem item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)item;
- (id)init;
- (void)drawRect:;
- (unsigned long long)accessibilityTraits;
- (id)_contextMenuInteraction:overrideSuggestedActionsForConfiguration:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (BOOL)hitTest:;
- (void).cxx_destruct;
- (void)setMenuInteraction:;
- (id)menuInteraction;
- (id)drawingBounds;
- (id)_underlineColor;
- (id)drawingTransform;
- (void)setDrawingTransform:;
- (void)tapHandler:;
- (double)_underlineThickness;
@end
