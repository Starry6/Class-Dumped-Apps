@interface IESLiveBigPartyUtils : NSObject
+ (BOOL)p_isEnlargeMode;
+ (id)blurredImageWithInputImage:withRadius:;
+ (id)confirmPanelTypeToNSString:;
+ (id)convertListUserToUserModel:isPreload:;
+ (id)enlargeShowTypeWithScene:room:;
+ (BOOL)isEnlargeGuestLayout:;
+ (id)isShowEnlargeConfig:layout:room:;
@end
