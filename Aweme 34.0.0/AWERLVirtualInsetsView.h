@interface AWERLVirtualInsetsView : AWERLVirtualView
@property (nonatomic) AWERLVirtualView subview;
@property (nonatomic) {UIEdgeInsets=dddd} insets;
- (id)initWithInsets:subview:;
- (id)layoutThatFits:;
- (BOOL)canRenderView;
- (id)insets;
- (void)setInsets:;
- (id)subview;
@end
