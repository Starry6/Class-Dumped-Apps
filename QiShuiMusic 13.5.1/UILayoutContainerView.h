@interface UILayoutContainerView : UIView
@property (nonatomic) <UILayoutContainerViewDelegate> delegate;
@property (nonatomic) BOOL usesInnerShadow;
@property (nonatomic) BOOL usesRoundedCorners;
- (void)_updateShadowViews;
- (BOOL)usesRoundedCorners;
- (void)dealloc;
- (void)_setFlagsFromDelegate:;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithCoder:;
- (void)setSemanticContentAttribute:;
- (void)encodeWithCoder:;
- (id)delegate;
- (BOOL)usesInnerShadow;
- (void)setBounds:;
- (void)addSubview:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)willMoveToWindow:;
- (void)_installShadowViews;
- (void)setUsesRoundedCorners:;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)setUsesInnerShadow:;
- (void)_tearDownShadowViews;
@end
