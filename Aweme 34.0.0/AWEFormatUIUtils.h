@interface AWEFormatUIUtils : NSObject
+ (double)scaleSizeForProMax:;
+ (double)scaleSizeForSmallScreen:;
+ (double)scaleSizeForProMaxAndSmallScreen:;
+ (BOOL)isProMax;
+ (id)scaleImage:WithSize:;
+ (BOOL)isSmallScreen;
@end
