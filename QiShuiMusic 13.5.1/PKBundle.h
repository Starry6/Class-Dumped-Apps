@interface PKBundle : NSObject
@property (nonatomic) NSObject<OS_xpc_object> _bundle;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString path;
@property (nonatomic) NSDictionary infoDictionary;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString supportPath;
@property (nonatomic) NSString executablePath;
@property (nonatomic) NSString plugInsPath;
- (id)executablePath;
- (id)path;
- (id)infoDictionary;
- (id)url;
- (id)bundleIdentifier;
- (id)initWithURL:;
- (id)plugInsPath;
- (id)initWithExecutablePath:;
- (id)supportPath;
- (id)initWithExecutableURL:;
- (void).cxx_destruct;
- (id)_bundle;
- (id)initWithPath:;
- (void)set_bundle:;
- (id)initWithXPCBundle:;
- (id)stringProperty:;
- (id)bundleDirectory:;
- (id)initForMainBundle;
@end
