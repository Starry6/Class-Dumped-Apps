@interface PGButtonView : PGMaterialView
@property (nonatomic) _PGButton actualButton;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) UIViewPropertyAnimator highlightAnimator;
@property (nonatomic) UIPointerInteraction pointerInteraction;
@property (nonatomic) <PGButtonViewDelegate> delegate;
@property (nonatomic) NSString systemImageName;
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL circular;
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double glyphSize;
@property (nonatomic) UIColor enabledTintColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sizeToFit;
- (id)highlightAnimator;
- (void)dealloc;
- (void)setHighlightAnimator:;
- (id)pointerInteraction;
- (void)layoutSubviews;
- (void)setText:;
- (BOOL)isCircular;
- (BOOL)pointInside:withEvent:;
- (void)setDelegate:;
- (void)setFont:;
- (void)setImage:;
- (id)systemImageName;
- (id)hitTest:withEvent:;
- (BOOL)isHighlighted;
- (void)setAccessibilityIdentifier:;
- (void)setSystemImageName:;
- (void)setCircular:;
- (id)pointerInteraction:styleForRegion:;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)font;
- (void)setHighlighted:;
- (void)setPointerInteraction:;
- (id)text;
- (id)accessibilityIdentifier;
- (id)image;
- (BOOL)isEnabled;
- (double)glyphSize;
- (void)_handleTouchDown:;
- (void)_handleTouchUpInside:;
- (void)setGlyphSize:;
- (void)_handleDragEnter:;
- (void)_handleDragExit:;
- (void)_handleTouchUpOrCancel:;
- (BOOL)_shouldHitTest;
- (id)enabledTintColor;
- (void)_updateGlyphConfigurationIfNeeded;
- (void)_updateForCircularAppearanceIfNeeded;
- (id)actualButton;
- (void)setActualButton:;
+ (Class)layerClass;
+ (id)buttonWithDelegate:;
+ (id)disabledTintColor;
@end
