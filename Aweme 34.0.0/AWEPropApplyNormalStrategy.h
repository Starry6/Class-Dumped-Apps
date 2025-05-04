@interface AWEPropApplyNormalStrategy : NSObject
@property (nonatomic) <AWEPropApplyContextProtocol> context;
@property (nonatomic) IESMMCameraConfig normalPropCameraConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onCameraInit:;
- (id)initWithApplyContext:;
- (void)applyProp:;
- (BOOL)isNormalCameraConfig:;
- (id)normalPropCameraConfig;
- (void)setNormalPropCameraConfig:;
- (BOOL)canApplyProp:;
- (void)preparePropApplyWithProp:currentProp:completion:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
