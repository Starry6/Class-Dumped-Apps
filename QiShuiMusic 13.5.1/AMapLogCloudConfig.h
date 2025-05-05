@interface AMapLogCloudConfig : NSObject
@property (nonatomic) double lifeTimeOfLocalLog;
@property (nonatomic) NSString ignoreLogFilterStr;
@property (nonatomic) NSMutableDictionary levelConfigDic;
@property (nonatomic) NSString componentName;
@property (nonatomic) BOOL logEnable;
@property (nonatomic) BOOL mobileUpload;
@property (nonatomic) BOOL debugInfoLogWrite;
@property (nonatomic) BOOL debugInfoLogUpload;
@property (nonatomic) NSArray ignoreLogSet;
- (void)_parseCloudConfig:;
- (id)cloudConfiWithLogLevel:;
- (BOOL)debugInfoLogUpload;
- (BOOL)debugInfoLogWrite;
- (id)ignoreLogFilterStr;
- (id)ignoreLogSet;
- (id)initWithComponentName:cloudConfig:;
- (id)levelConfigDic;
- (double)lifeTimeOfLocalLog;
- (BOOL)logEnable;
- (BOOL)mobileUpload;
- (void)setIgnoreLogFilterStr:;
- (void)setLevelConfigDic:;
- (void)setLifeTimeOfLocalLog:;
- (id)componentName;
- (void).cxx_destruct;
@end
