@interface DTFUIElementManager : NSObject
+ (id)generateUIImageViewWithFrame:andImageName:andContentMode:;
+ (id)generateUIImageWithName:;
+ (id)generateUIViewWithFrame:andBackGroundColor:andAlpha:;
+ (id)generateUIlabelWithFrame:andColor:andFont:andAlpha:andBackGroundColor:andLineBreakMode:andAlignment:;
+ (id)getResourceDir;
@end
