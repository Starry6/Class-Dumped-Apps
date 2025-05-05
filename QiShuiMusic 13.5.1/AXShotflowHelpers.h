@interface AXShotflowHelpers : NSObject
+ (id)createVImageBuffer:;
+ (id)setCIContext;
+ (id)setCIContext:;
+ (id)getCGImageFromCIImage:;
+ (id)resizeImage:byX:andY:;
+ (id)resizeImage:to:;
+ (id)resizeImage:toWidth:andHeight:;
@end
