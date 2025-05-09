@interface SFDownloadsBarButtonItemView : UIButton
@property (nonatomic) UIBarButtonItem barButtonItem;
@property (nonatomic) double progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)barButtonItem;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateContents;
- (id)_barButtonHitRect;
- (BOOL)pointInside:withEvent:;
- (void)setProgress:;
- (void)_updateIcon;
- (id)pointerInteraction:regionForRequest:defaultRegion:;
- (void)pointerInteraction:willExitRegion:animator:;
- (id)deferrableUpdateViewState;
- (void)pointerInteraction:willEnterRegion:animator:;
- (double)progress;
- (void)traitCollectionDidChange:;
- (id)_selectedIndicatorBounds;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setBarButtonItem:;
- (void)pulse;
- (void)_buttonPressed;
- (void)_installSubviews;
+ (id)buttonWithBarButtonItem:;
@end
