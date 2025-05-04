@interface AWEPlatformSDKConfiguration : BDPlatformSDKConfiguration
@property (nonatomic) NSString awe_stayCheckedImageName;
@property (nonatomic) NSString awe_checkedImageName;
@property (nonatomic) NSString awe_uncheckedImageName;
@property (nonatomic) NSString awe_defaultAppIconName;
- (id)stayCheckedImage;
- (void)setStayCheckedImage:;
- (void)setDefaultAppIcon:;
- (id)awe_stayCheckedImageName;
- (void)setAwe_stayCheckedImageName:;
- (id)awe_checkedImageName;
- (void)setAwe_checkedImageName:;
- (id)awe_uncheckedImageName;
- (void)setAwe_uncheckedImageName:;
- (id)awe_defaultAppIconName;
- (void)setAwe_defaultAppIconName:;
- (void).cxx_destruct;
- (id)checkedImage;
- (void)setCheckedImage:;
- (void)setUncheckedImage:;
- (id)uncheckedImage;
- (id)defaultAppIcon;
@end
