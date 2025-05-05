@interface SCNJSValueTmpImp : NSObject
- (id)toVector4;
- (id)toVector3;
- (id)toTransform3D;
+ (id)valueWithVector4:inContext:;
+ (id)valueWithVector3:inContext:;
+ (id)valueWithTransform3D:inContext:;
@end
