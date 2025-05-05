@interface UIWindowSceneGeometry : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} systemFrame;
@property (nonatomic) q interfaceOrientation;
- (long long)interfaceOrientation;
- (id)_init;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)systemFrame;
- (void)_setInterfaceOrientation:;
- (void)_setSystemFrame:;
+ (id)_calculateEffectiveGeometryForWindowScene:;
@end
