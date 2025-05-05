@interface UIAutocorrectTextView : UIView
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL isLongString;
- (void)setAnimating:;
- (BOOL)pointInside:forEvent:;
- (void)drawRect:;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (BOOL)animating;
- (void)setEdgeType:;
- (id)initWithFrame:string:type:edgeType:;
- (id)_calculateRectForExpandedHitRegion;
- (BOOL)isLongString;
- (void)setIsLongString:;
@end
