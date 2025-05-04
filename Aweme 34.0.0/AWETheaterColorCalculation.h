@interface AWETheaterColorCalculation : NSObject
+ (id)colorLerpFromColor:toColor:fraction:;
+ (id)getFeedColor:themeStyle:;
+ (id)colorPickerForVideoHallWithImage:;
+ (void)getFeedColorWithUrl:themeStyle:completion:;
+ (id)getHeaderColor:;
+ (id)overlayColorForVideoHallWithBaseColor:addColor:;
@end
