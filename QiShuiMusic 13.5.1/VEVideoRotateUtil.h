@interface VEVideoRotateUtil : NSObject
+ (void)calcVideoRotation:rotateAngle:flipX:flipY:;
+ (unsigned long long)degressFromVideoAsset:degress:;
+ (BOOL)needRotateWithMode:;
+ (unsigned long long)rotationMode:AddRotation:;
@end
