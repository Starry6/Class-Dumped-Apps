@interface DTFSDKConfiguration : NSObject
@property (nonatomic) NSDictionary originalData;
@property (nonatomic) NSString NEED_BACKUP_URL;
@property (nonatomic) NSString LOG_UPLOAD;
@property (nonatomic) NSString LOG_DEBUG_UPLOAD;
@property (nonatomic) NSString FORCE_MODEL_DOWNLOAD;
@property (nonatomic) NSString URLSESSION_DEGRADE;
@property (nonatomic) NSArray MODEL_FILES;
@property (nonatomic) BOOL urlSessionDegrade;
- (id)LOG_DEBUG_UPLOAD;
- (id)MODEL_FILES;
- (void)logError:param:;
- (void)setMODEL_FILES:;
- (id)NEED_BACKUP_URL;
- (id)FORCE_MODEL_DOWNLOAD;
- (id)LOG_UPLOAD;
- (id)URLSESSION_DEGRADE;
- (void)loadProperties;
- (void)parseConfigString:;
- (void)processRemoteConfig;
- (void)setConfigString:;
- (void)setFORCE_MODEL_DOWNLOAD:;
- (void)setLOG_DEBUG_UPLOAD:;
- (void)setLOG_UPLOAD:;
- (void)setNEED_BACKUP_URL:;
- (void)setOriginalData:;
- (void)setURLSESSION_DEGRADE:;
- (void)setUrlSessionDegrade:;
- (BOOL)urlSessionDegrade;
- (id)valueForKey:;
- (void)updateConfig;
- (id)init;
- (void).cxx_destruct;
- (id)originalData;
@end
