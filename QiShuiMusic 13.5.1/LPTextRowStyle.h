@interface LPTextRowStyle : NSObject
@property (nonatomic) LPTextViewStyle leading;
@property (nonatomic) LPTextViewStyle trailing;
@property (nonatomic) q balancingMode;
- (id)left;
- (void).cxx_destruct;
- (id)right;
- (id)trailing;
- (id)leading;
- (id)initWithPlatform:fontScalingFactor:;
- (void)applyToAllTextViewStyles:;
- (long long)balancingMode;
- (void)setBalancingMode:;
@end
