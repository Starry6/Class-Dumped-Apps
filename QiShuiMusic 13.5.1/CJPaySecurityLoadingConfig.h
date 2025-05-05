@interface CJPaySecurityLoadingConfig : JSONModel
@property (nonatomic) CJPayStyleLoadingConfig cycleStyleLoadingConfig;
@property (nonatomic) CJPayStyleLoadingConfig breatheStyleLoadingConfig;
- (id)breatheStyleLoadingConfig;
- (id)cycleStyleLoadingConfig;
- (void)setBreatheStyleLoadingConfig:;
- (void)setCycleStyleLoadingConfig:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
