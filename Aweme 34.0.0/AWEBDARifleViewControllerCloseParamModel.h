@interface AWEBDARifleViewControllerCloseParamModel : BDXBridgeModel
@property (nonatomic) NSString containerID;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) BOOL fromCreativeCombine;
@property (nonatomic) BOOL fromMovieAnchor;
- (BOOL)fromCreativeCombine;
- (BOOL)fromMovieAnchor;
- (void)setFromCreativeCombine:;
- (void)setFromMovieAnchor:;
- (void)setContainerID:;
- (BOOL)disableAnimation;
- (id)containerID;
- (void).cxx_destruct;
- (void)setDisableAnimation:;
+ (id)JSONKeyPathsByPropertyKey;
@end
