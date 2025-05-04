@interface AWEUserUILayoutInfo : NSObject
- (id)aAWEUserModuleConfigCommon;
+ (Class)aAWEUserModuleConfigCommonClass;
+ (double)ambientHeaderHeight;
+ (BOOL)isLowEndMachine;
+ (BOOL)isHalfScreenLogin;
+ (void)updateLoginUserContextHalfScreen:;
+ (BOOL)isHTSElderly;
+ (BOOL)showNormalImageHeader;
+ (double)normalImageHeaderHeight;
+ (BOOL)isShowPadTheme;
+ (BOOL)isAmbientBigOrSmall;
+ (BOOL)padIsHighlyCompactWithViewSize:;
+ (double)ambientHeaderHeightWithIsDeviceVertical:;
+ (id)halfScreenLayoutModel;
+ (id)padHalfScreenContainerSize;
+ (BOOL)isPadOpaqueHeader;
+ (id)normalImageHeaderURL;
+ (id)normalImageHeaderDefaultImage;
+ (double)zoomFactor;
+ (long long)contentLayoutStyle;
@end
