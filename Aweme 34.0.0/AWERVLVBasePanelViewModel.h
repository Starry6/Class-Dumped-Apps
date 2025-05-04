@interface AWERVLVBasePanelViewModel : NSObject
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) UIViewController container;
- (id)panelID;
- (void)panelDidLoad;
- (void)panelWillAppear;
- (void)panelDidAppear;
- (void)panelDidDisAppear;
- (void)setContainer:;
- (id)container;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)pageContext;
- (void)containerDidLayoutSubviews;
@end
