@interface AMapLogCloudConfigUnit : NSObject
@property (nonatomic) NSString levelStr;
@property (nonatomic) double lifeTimeOfLocalLog;
@property (nonatomic) BOOL logEnable;
@property (nonatomic) BOOL mobileUpload;
@property (nonatomic) BOOL debugInfoLogWrite;
@property (nonatomic) BOOL debugInfoLogUpload;
@property (nonatomic) NSArray ignoreLogSet;
@property (nonatomic) Q maxSizeForSingleUpload;
@property (nonatomic) Q threadValueOfUpload;
@property (nonatomic) Q localCacheTotalSize;
- (void)_parseCloudConfig:;
- (BOOL)debugInfoLogUpload;
- (BOOL)debugInfoLogWrite;
- (id)ignoreLogSet;
- (id)initWithCloudConfig:level:;
- (id)levelStr;
- (double)lifeTimeOfLocalLog;
- (unsigned long long)localCacheTotalSize;
- (BOOL)logEnable;
- (unsigned long long)maxSizeForSingleUpload;
- (BOOL)mobileUpload;
- (unsigned long long)threadValueOfUpload;
- (void).cxx_destruct;
@end
