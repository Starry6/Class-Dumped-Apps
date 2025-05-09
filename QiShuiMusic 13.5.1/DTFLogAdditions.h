@interface DTFLogAdditions : NSObject
@property (nonatomic) NSString UUID;
@property (nonatomic) NSString UTDID;
@property (nonatomic) NSString clientID;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSString language;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString logServerURL;
@property (nonatomic) NSString configServerURL;
@property (nonatomic) NSString platformID;
- (id)configServerURL;
- (id)UTDID;
- (id)defaultUploadLogTypes;
- (id)logServerURL;
- (void)logToFile:;
- (long long)numberOfSyncLogs;
- (id)platformID;
- (void)setConfigServerURL:;
- (void)setLogServerURL:;
- (void)setPlatformID:;
- (id)deviceModel;
- (id)userID;
- (void)setLanguage:;
- (id)language;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setDeviceModel:;
- (id)clientID;
- (id)UUID;
+ (id)sharedInstance;
@end
