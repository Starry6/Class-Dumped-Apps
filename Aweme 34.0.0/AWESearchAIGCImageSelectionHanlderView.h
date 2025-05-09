@interface AWESearchAIGCImageSelectionHanlderView : UIView
@property (nonatomic) q index;
@property (nonatomic) BOOL isSmallType;
@property (nonatomic) UIView indexView;
@property (nonatomic) UILabel indexLabel;
@property (nonatomic) UIButton handleViewButton;
@property (nonatomic) CAShapeLayer roundedRectLayer;
@property (nonatomic) CAShapeLayer topLeftLayer;
@property (nonatomic) CAShapeLayer topRightLayer;
@property (nonatomic) CAShapeLayer bottomLeftLayer;
@property (nonatomic) CAShapeLayer bottomRightLayer;
@property (nonatomic) BOOL selected;
@property (nonatomic) double originHeight;
@property (nonatomic) @? clickHandler;
- (id)clickHandler;
- (id)indexView;
- (void)setIndexView:;
- (void)setOriginHeight:;
- (double)originHeight;
- (void)setIndexLabel:;
- (id)createLayerWithPath:;
- (void)drawSelectionRect;
- (id)topLeftLayer;
- (void)setTopLeftLayer:;
- (id)topRightLayer;
- (void)setTopRightLayer:;
- (id)bottomRightLayer;
- (void)setBottomRightLayer:;
- (id)bottomLeftLayer;
- (void)setBottomLeftLayer:;
- (void)updateSelected:;
- (void)setClickHandler:;
- (id)roundedRectLayer;
- (void)setIsSmallType:;
- (BOOL)isSmallType;
- (id)initWithFrame:index:isSmallType:;
- (id)handleViewButton;
- (double)layoutHeightThreshold;
- (double)indexRoundRadius;
- (double)rectMinHeight;
- (void)updateHeightTo:;
- (void)setupIndexView;
- (double)selectionRectRadius;
- (double)unselectionRectRadius;
- (id)createRoundedRectLayerWithPath:;
- (void)setRoundedRectLayer:;
- (void)handleViewButtonClick;
- (double)selectionRectMinHeight;
- (double)unselectionRectMinHeight;
- (void)setHandleViewButton:;
- (void)setIndex:;
- (long long)index;
- (id)indexLabel;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
- (void)setupUI;
+ (double)unselectionRectRadiusIsSmallType:;
+ (double)selectionRectRadiusIsSmallType:;
+ (double)unselectionRectMinHeightIsSmallType:;
+ (double)selectionRectMinHeightIsSmallType:;
+ (double)indexRoundRadiusIsSmallType:;
@end
