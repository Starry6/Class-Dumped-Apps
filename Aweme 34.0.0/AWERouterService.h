@interface AWERouterService : NSObject
- (void)setSchemeTransformedValidateEnable:;
- (void)setSchemeTransformEnable:;
- (void)setSchemeValidateEnable:;
+ (id)sharedInstance;
@end
