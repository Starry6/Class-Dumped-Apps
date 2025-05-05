@interface SKInternalProductStorePromotionController : NSObject
- (void)fetchOverridesForVisibilityAndOrderForApplicationBundleIdentifier:completionHandler:;
+ (id)defaultController;
@end
