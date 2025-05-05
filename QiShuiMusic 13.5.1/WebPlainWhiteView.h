@interface WebPlainWhiteView : WAKView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataSource:;
- (void)drawRect:;
- (void)layout;
- (void)setNeedsLayout:;
- (id)elementAtPoint:;
- (void)dataSourceUpdated:;
- (void)viewWillMoveToHostWindow:;
- (void)viewDidMoveToHostWindow;
- (id)elementAtPoint:allowShadowContent:;
@end
