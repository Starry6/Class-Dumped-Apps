@interface AWEUserUIComponentProvider : NSObject
+ (id)modifyComponent:;
+ (id)loginComponent:viewModel:;
+ (id)loginComponentClassMap;
+ (id)modifyComponentClassMap;
@end
