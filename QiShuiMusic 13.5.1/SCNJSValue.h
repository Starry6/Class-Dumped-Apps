@interface SCNJSValue : NSValue
- (id)vector3;
- (id)vector4;
- (id)matrix4;
+ (id)SCNJSExportProtocol;
+ (id)valueWithVector3:;
+ (id)valueWithVector4:;
+ (id)valueWithMatrix4:;
@end
