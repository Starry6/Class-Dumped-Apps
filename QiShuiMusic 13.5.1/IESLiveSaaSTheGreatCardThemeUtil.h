@interface IESLiveSaaSTheGreatCardThemeUtil : NSObject
+ (long long)quantizedGreen:;
+ (id)colorFromRGB555:;
+ (long long)modifyWordWidthWithValue:currentWidth:targetWidth:;
+ (long long)quantizedBlue:;
+ (long long)quantizedRed:;
+ (char *)rawPixelDataFromImage:pixelCount:;
+ (void)themeFromImage:completion:;
@end
