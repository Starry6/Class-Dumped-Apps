@interface AWEIMRouter : NSObject
+ (BOOL)transferToURLString:;
+ (void)transferToURLString:completion:;
+ (id)viewControllerForURLString:;
+ (id)transitionWithURLString:;
+ (id)transitionWithFormat:;
+ (BOOL)transferToURLStringWithFormat:;
+ (id)__markURLIfNeed:;
@end
