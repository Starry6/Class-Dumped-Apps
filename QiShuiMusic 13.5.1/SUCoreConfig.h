@interface SUCoreConfig : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSString projectName;
@property (nonatomic) NSString defaultsPath;
- (id)accessQueue;
- (void).cxx_destruct;
- (id)description;
- (id)projectName;
- (id)initWithProjectName:;
- (id)initWithProjectName:defaultsPath:;
- (void)stateSafeSetConfig:forKey:;
- (id)stateSafeGetConfig;
- (void)setConfig:forKey:;
- (id)getConfig;
- (void)clearConfig;
- (BOOL)getBoolConfigForKey:;
- (BOOL)getBoolConfigForKey:defaultValue:;
- (id)getStringConfigForKey:;
- (id)getNumberConfigForKey:;
- (id)defaultsPath;
@end
