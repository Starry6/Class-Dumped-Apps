@interface IESECColorManager : NSObject
@property (nonatomic) Q effectiveColorTheme;
@property (nonatomic) Q preferredColorTheme;
- (id)colorForKey:;
- (unsigned long long)effectiveColorTheme;
- (unsigned long long)preferredColorTheme;
- (void)setPreferredColorTheme:;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (void)iesec_colorForTarget:propertyName:color:;
+ (void)iesec_colorForTarget:propertyName:color:state:;
+ (void)iesec_colorForTarget:propertyName:colorName:;
+ (void)iesec_colorForTarget:propertyName:colorName:state:;
+ (id)p_buildColorStatePropertyWithTarget:propertyName:useState:state:;
+ (id)sharedManager;
@end
