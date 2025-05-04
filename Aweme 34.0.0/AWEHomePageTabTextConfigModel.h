@interface AWEHomePageTabTextConfigModel : MTLModel
@property (nonatomic) NSString selectedDarkColor;
@property (nonatomic) NSString selectedLightColor;
@property (nonatomic) NSString unSelectedDarkColor;
@property (nonatomic) NSString unSelectedLightColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSelectedDarkColor:;
- (void)setSelectedLightColor:;
- (void)setUnSelectedDarkColor:;
- (void)setUnSelectedLightColor:;
- (id)selectedDarkColor;
- (id)unSelectedDarkColor;
- (id)selectedLightColor;
- (id)unSelectedLightColor;
- (BOOL)isValidARGBColorWithHexString:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
