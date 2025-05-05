@interface IESLiveInteractStreamRenderFilterConfig : NSObject
@property (nonatomic) NSString effectPlatformConfig;
@property (nonatomic) NSString effectABInfo;
@property (nonatomic) NSString effectABLicense;
@property (nonatomic) BOOL usingNewEffectMsgRegister;
@property (nonatomic) BOOL renderOnSingleView;
@property (nonatomic) NSInteger masterLayerId;
- (id)effectABLicense;
- (id)effectABInfo;
- (id)effectPlatformConfig;
- (int)masterLayerId;
- (BOOL)renderOnSingleView;
- (void)setEffectABInfo:;
- (void)setEffectABLicense:;
- (void)setEffectPlatformConfig:;
- (void)setMasterLayerId:;
- (void)setRenderOnSingleView:;
- (void)setUsingNewEffectMsgRegister:;
- (BOOL)usingNewEffectMsgRegister;
- (void).cxx_destruct;
@end
