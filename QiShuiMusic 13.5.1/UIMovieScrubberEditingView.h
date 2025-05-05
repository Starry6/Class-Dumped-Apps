@interface UIMovieScrubberEditingView : UIView
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL editing;
@property (nonatomic) double edgeInset;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (void)setEditing:;
- (void)bounce;
- (id)initWithFrame:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)setEdgeInset:;
- (double)edgeInset;
- (id)_leftHandleRect;
- (BOOL)pointInsideLeftHandle:;
- (id)_rightHandleRect;
- (BOOL)pointInsideRightHandle:;
- (int)handleForPoint:hitOffset:;
- (id)_handleImages;
- (void)_updateHandleImages;
- (double)_bounceValueForFraction:;
@end
