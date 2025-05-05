@interface IESLiveConsumeUserEnterView : IESLiveMessageInteractionUserEnterView
@property (nonatomic) UIImageView containerView;
@property (nonatomic) UIImageView ecommerceImageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) NSMutableArray whiteShadowArray;
@property (nonatomic) NSMutableArray streamLineArray;
@property (nonatomic) CAShapeLayer shapeLayer;
- (void)touchViewDidTap;
- (id)streamLineArray;
- (id)createStreamLine:;
- (id)descLabel;
- (id)ecommerceImageView;
- (void)setDescLabel:;
- (void)setEcommerceImageView:;
- (void)setStreamLineArray:;
- (void)setWhiteShadowArray:;
- (void)updateWithEnterMessageNode:;
- (id)whiteShadowArray;
- (void)dealloc;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (id)shapeLayer;
- (void)startAnimation;
- (void)setShapeLayer:;
- (void).cxx_destruct;
- (void)layoutUI;
@end
