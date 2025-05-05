@interface MICapabilitiesManager : NSObject
- (id)checkCapabilities:withOptions:error:;
+ (id)defaultManager;
@end
