@interface AWEIMCreateChatBubbleView : UIView
@property (nonatomic) NSArray itemList;
@property (nonatomic) NSArray buttonList;
@property (nonatomic) CAShapeLayer baseLayer;
@property (nonatomic) CAShapeLayer extraLayer;
- (id)baseLayerPathWithSize:;
- (void)btnClicked:;
- (id)buttonList;
- (id)extraLayer;
- (id)extraLayerPath;
- (void)setButtonList:;
- (void)setExtraLayer:;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
- (id)initWithItemList:;
- (id)baseLayer;
- (void)setBaseLayer:;
@end
