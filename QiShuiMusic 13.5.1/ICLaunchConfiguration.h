@interface ICLaunchConfiguration : NSObject
@property (nonatomic) Q environment;
@property (nonatomic) NSString container;
@property (nonatomic) BOOL resetsCloud;
@property (nonatomic) BOOL resetsContainer;
@property (nonatomic) BOOL resetsState;
@property (nonatomic) NSString localAccountArchiveName;
@property (nonatomic) NSString cloudAccountArchiveName;
@property (nonatomic) NSArray launchArguments;
- (void)setContainer:;
- (void)setEnvironment:;
- (void)setLocalAccountArchiveName:;
- (id)initWithDictionary:;
- (id)container;
- (void)setResetsState:;
- (id)localAccountArchiveName;
- (void)setCloudAccountArchiveName:;
- (unsigned long long)environment;
- (id)cloudAccountArchiveName;
- (BOOL)resetsState;
- (id)initWithEnvironment:container:resetsContainer:resetsCloud:resetsState:localAccountArchive:cloudAccountArchive:;
- (BOOL)resetsCloud;
- (BOOL)resetsContainer;
- (void).cxx_destruct;
- (id)launchArguments;
- (void)setResetsCloud:;
- (void)setResetsContainer:;
+ (id)currentConfiguration;
+ (id)nonDefaultValueForValue:;
+ (id)userInterfaceTesting;
@end
