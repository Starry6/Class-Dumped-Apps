@interface SKStarRatingControl : UIControl
@property (nonatomic) NSString explanationText;
@property (nonatomic) double starWidth;
@property (nonatomic) float value;
- (void)sizeToFit;
- (BOOL)beginTrackingWithTouch:withEvent:;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (id)hitRect;
- (void)setValue:;
- (void).cxx_destruct;
- (float)value;
- (void)endTrackingWithTouch:withEvent:;
- (BOOL)continueTrackingWithTouch:withEvent:;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)setExplanationText:;
- (id)explanationText;
- (id)initWithBackgroundImage:foregroundImage:;
- (void)setHitPadding:;
- (BOOL)canHandleSwipes;
- (id)_foregroundImageClipBounds;
- (id)_newExplanationLabel;
- (void)_updateValueForPoint:;
- (double)starWidth;
- (void)setStarWidth:;
@end
