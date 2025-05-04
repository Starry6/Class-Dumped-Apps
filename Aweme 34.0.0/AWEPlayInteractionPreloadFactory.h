@interface AWEPlayInteractionPreloadFactory : NSObject
- (id)aAWEPadModuleAdapter;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)createInteractionViewControllerWithAwemeModel:referString:;
+ (BOOL)isRichContentWithAwemeModel:referString:;
@end
