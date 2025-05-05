@interface VERendererFactory : NSObject
+ (id)makeRLRenderer:context:;
+ (id)makeRenderer:context:;
+ (id)makeRendererDrawable:context:;
@end
