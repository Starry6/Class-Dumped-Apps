@interface BDUGLuckyContainerUtil : NSObject
+ (id)localResourcePathWithURLString:;
+ (id)localResourceDataWithURLString:;
+ (id)__fetchResourceWithResourceLoader:urlString:taskConfig:;
+ (BOOL)boolValueOfNumber:default:;
+ (BOOL)isLowPhone;
+ (id)localResourceWithURLString:;
+ (id)originURLWithContainer:;
+ (id)sourceURLWithContainer:;
+ (id)sourceURLWithOriginURLComp:;
+ (id)sourceURLWithOriginURLString:;
+ (id)topBDXViewController;
@end
