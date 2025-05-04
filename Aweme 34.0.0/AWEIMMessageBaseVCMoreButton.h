@interface AWEIMMessageBaseVCMoreButton : UIButton
@property (nonatomic) CAShapeLayer dotLayer;
@property (nonatomic) BOOL hasShowDot;
- (BOOL)p_getGroupBlockMoreButtonGuildDotShowFlag;
- (void)setHasShowDot:;
- (BOOL)hasShowDot;
- (void)p_setGroupBlockMoreButtonGuildDotShowFlag;
- (void)trySetDotLayer;
- (void)markButtonClick;
- (void)setDotLayer:;
- (void).cxx_destruct;
- (id)dotLayer;
@end
