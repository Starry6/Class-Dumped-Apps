@interface CARemoteEffect : NSObject
@property (nonatomic) NSDictionary animations;
@property (nonatomic) Q effectID;
@property (nonatomic) Q layerRenderID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString baseState;
@property (nonatomic) double blendFactor;
- (id)animations;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)name;
- (id)copyWithZone:;
- (id)animationFromState:toState:;
- (void)setAnimation:fromState:toState:;
- (BOOL)_setCARenderRemoteEffect:layer:;
- (void)_setLayerRenderId:;
- (id)baseState;
- (void)setBaseState:;
- (double)blendFactor;
- (void)setBlendFactor:;
- (unsigned long long)effectID;
- (unsigned long long)layerRenderID;
+ (BOOL)supportsSecureCoding;
@end
