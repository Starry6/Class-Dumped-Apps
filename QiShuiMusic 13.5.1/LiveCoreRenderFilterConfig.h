@interface LiveCoreRenderFilterConfig : NSObject
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSString effectPlatformConfig;
@property (nonatomic) NSString effectABInfo;
@property (nonatomic) NSString effectABLicense;
@property (nonatomic) BOOL usingNewEffectMsgRegister;
@property (nonatomic) BOOL renderOnSingleView;
- (id)effectABLicense;
- (id)effectABInfo;
- (id)effectPlatformConfig;
- (BOOL)renderOnSingleView;
- (void)setEffectABInfo:;
- (void)setEffectABLicense:;
- (void)setEffectPlatformConfig:;
- (id)setMixedOutputWidth:height:;
- (void)setRenderOnSingleView:;
- (void)setUsingNewEffectMsgRegister:;
- (BOOL)usingNewEffectMsgRegister;
- (void)setWidth:;
- (int)height;
- (int)width;
- (void)setHeight:;
- (void).cxx_destruct;
+ (id)defaultConfiguration;
@end
