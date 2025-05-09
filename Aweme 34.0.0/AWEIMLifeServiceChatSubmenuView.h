@interface AWEIMLifeServiceChatSubmenuView : UIView
@property (nonatomic) AWEIMLifeServiceChatMenuViewModel viewModel;
@property (nonatomic) NSArray modelArray;
@property (nonatomic) NSArray itemArray;
@property (nonatomic) UIView buttonContainerView;
@property (nonatomic) UIView shadowContainerView;
@property (nonatomic) CAShapeLayer triangleLayer;
@property (nonatomic) <AWEIMLifeServiceChatMenuViewDelegate> delegate;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double trigleHeight;
- (id)itemArray;
- (void)setItemArray:;
- (void)setModelArray:;
- (id)modelArray;
- (id)initWithModelArray:;
- (void)__setupUI;
- (void)updateTriangleWithMiddleX:;
- (double)trigleHeight;
- (id)triangleLayer;
- (void)setShadowContainerView:;
- (id)shadowContainerView;
- (void)setTrigleHeight:;
- (void)__subMenuItemButtonClick:;
- (void)setTriangleLayer:;
- (id)initWithViewModel:;
- (id)delegate;
- (id)viewModel;
- (id)size;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setSize:;
- (void)setDelegate:;
- (id)buttonContainerView;
- (void)setButtonContainerView:;
+ (id)drawTriangleLayerWithWidth:height:;
@end
