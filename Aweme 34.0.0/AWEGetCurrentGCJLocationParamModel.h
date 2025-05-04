@interface AWEGetCurrentGCJLocationParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber silent;
@property (nonatomic) NSNumber forceLocate;
@property (nonatomic) NSNumber isLegitimate;
- (id)forceLocate;
- (void)setForceLocate:;
- (id)isLegitimate;
- (void)setIsLegitimate:;
- (void).cxx_destruct;
- (void)setSilent:;
- (id)silent;
+ (id)modelCustomPropertyMapper;
@end
