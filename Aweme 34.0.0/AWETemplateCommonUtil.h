@interface AWETemplateCommonUtil : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)currentSelectedCityCode;
+ (id)currentCutsameSDKVersion;
+ (id)currentEffectPlatformSDKVersion;
+ (id)iconForCollectedState;
+ (id)iconForUncollectedState;
+ (id)mockedJianYingAPPVersion;
+ (id)currentSupportFeatureBits;
+ (BOOL)canSupportFeatureBits:;
@end
