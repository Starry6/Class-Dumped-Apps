@interface INCLocalExtensionRegistry : NSObject
- (id)init;
- (void)registerLocalExtension:;
- (void)deregisterLocalExtension:;
- (void).cxx_destruct;
- (id)localExtensionForIdentifier:;
- (id)localExtensions;
+ (id)sharedInstance;
@end
