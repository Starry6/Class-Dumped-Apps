@interface BDXBridgeAuthConfigBuilder : NSObject
@property (nonatomic) <BDXBridgeAuthConfigDownload> download;
@property (nonatomic) @? builtinAuthConfigBlock;
@property (nonatomic) q delayUpdateAuthConfigWhenLaunch;
@property (nonatomic) NSString boeHostSuffix;
- (long long)delayUpdateAuthConfigWhenLaunch;
- (id)boeHostSuffix;
- (id)builtinAuthConfigBlock;
- (void)setBoeHostSuffix:;
- (void)setBuiltinAuthConfigBlock:;
- (void)setDelayUpdateAuthConfigWhenLaunch:;
- (id)download;
- (void).cxx_destruct;
- (void)setDownload:;
@end
