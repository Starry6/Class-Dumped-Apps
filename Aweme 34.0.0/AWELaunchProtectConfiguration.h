@interface AWELaunchProtectConfiguration : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportEvent:params:;
- (BOOL)_overrideForceEnable:;
- (void)_overrideAppendDeepCleanConfigDocumentsPassList:;
- (void)safemodeDidFinishLaunching;
- (void)protectFirstTry;
- (id)deepCleanConfig;
- (id)safemodeUIConfig;
- (void)onDidFinishLaunching;
- (BOOL)isEnabled;
@end
