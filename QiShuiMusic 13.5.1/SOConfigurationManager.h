@interface SOConfigurationManager : NSObject
- (id)init;
- (void)saveConfigurationData:completion:;
+ (id)defaultManager;
@end
