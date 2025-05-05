@interface BDUGLuckyDogResourceLoader : NSObject
+ (id)loadDataLocalOnlyFromURLString:;
+ (id)loadPathLocalOnlyFromURLString:;
+ (void)loadFromURLString:completion:;
+ (id)localResourceFromResourceLoader:;
@end
