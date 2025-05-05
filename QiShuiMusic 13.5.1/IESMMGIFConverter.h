@interface IESMMGIFConverter : NSObject
+ (void)customGIFfromURL:completion:;
+ (id)p_createGIFWithTimeArray:fromVideo:withConfig:;
+ (id)p_filePropertiesWithLoopCount:;
+ (id)p_framePropertiesWithFrameDuration:;
+ (id)p_resizeImageFromImage:withConfig:;
@end
