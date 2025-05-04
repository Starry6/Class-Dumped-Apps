@interface AWECloseCardDialogMethodParamModel : BDXBridgeModel
@property (nonatomic) BOOL forceCloseCard;
@property (nonatomic) q cardStatus;
@property (nonatomic) BOOL closeCardWithAnimation;
- (long long)cardStatus;
- (void)setCardStatus:;
- (BOOL)forceCloseCard;
- (void)setForceCloseCard:;
- (BOOL)closeCardWithAnimation;
- (void)setCloseCardWithAnimation:;
+ (id)JSONKeyPathsByPropertyKey;
@end
