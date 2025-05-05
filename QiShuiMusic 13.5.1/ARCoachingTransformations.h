@interface ARCoachingTransformations : NSObject
+ (id)translate:;
+ (id)scale:;
+ (float)degreesToRadians:;
+ (id)rotate:axis:;
+ (id)perspective_fov:aspect:near:far:;
+ (id)lookAt:center:up:;
+ (id)ortho2d:right:bottom:top:near:far:;
+ (id)fromMatrix:;
@end
