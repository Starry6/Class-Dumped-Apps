@interface OBTableHeaderFooterView : UIView
@property (nonatomic) UIView internalContentView;
@property (nonatomic) UIView hostedView;
@property (nonatomic) Q layout;
@property (nonatomic) {UIEdgeInsets=dddd} internalContentPadding;
@property (nonatomic) {UIEdgeInsets=dddd} hostedViewPadding;
@property (nonatomic) NSArray hostedConstraints;
@property (nonatomic) NSArray internalContentConstraints;
- (id)hostedView;
- (void)setHostedView:;
- (id)intrinsicContentSize;
- (void)setLayout:;
- (id)initWithLayout:;
- (unsigned long long)layout;
- (void).cxx_destruct;
- (void)_applyLayout;
- (void)setInternalContentPadding:;
- (void)setHostedViewPadding:;
- (void)setInternalContentView:;
- (void)_layoutContainerForTableHeader;
- (void)_layoutContainerForTableFooter;
- (id)internalContentView;
- (id)internalContentPadding;
- (id)hostedViewPadding;
- (id)hostedConstraints;
- (void)setHostedConstraints:;
- (id)internalContentConstraints;
- (void)setInternalContentConstraints:;
@end
