@interface BSXPCBundle : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundlePath;
@property (nonatomic) NSString executablePath;
@property (nonatomic) NSDictionary infoDictionary;
@property (nonatomic) NSObject<OS_xpc_object> xpcBundle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)executablePath;
- (id)bundlePath;
- (id)infoDictionary;
- (id)bundleIdentifier;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)xpcBundle;
+ (id)mainBundle;
+ (id)bundleWithPath:;
+ (id)bundleForPID:;
+ (id)bundleWithExecutablePath:;
+ (id)bundleWithXPCBundle:;
@end
