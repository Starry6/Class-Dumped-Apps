@interface UITextSelectionRectView : UIView
@property (nonatomic) BOOL hasPath;
@property (nonatomic) CAShapeLayer pathLayer;
@property (nonatomic) UIColor selectionColor;
@property (nonatomic) UIColor selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic) double selectionCornerRadius;
- (id)path;
- (void)setPath:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setSelectionCornerRadius:;
- (double)selectionBorderWidth;
- (void)setSelectionBorderColor:;
- (void).cxx_destruct;
- (double)selectionCornerRadius;
- (void)setSelectionBorderWidth:;
- (id)selectionBorderColor;
- (BOOL)hasPath;
- (id)pathLayer;
- (void)setSelectionColor:;
- (id)selectionColor;
+ (Class)layerClass;
@end
