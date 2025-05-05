@interface FetchDidBlockHolder : NSObject
@property (nonatomic) @? fetchDidBlock;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSLock lock;
@property (nonatomic) @? settingConfigBlock;
- (void)setBlock:appID:;
- (void)fetchDeviceID;
- (id)fetchDidBlock;
- (id)fetchSettingConfig;
- (void)setFetchDidBlock:;
- (void)setSettingBlock:;
- (void)setSettingConfigBlock:;
- (id)settingConfigBlock;
- (id)init;
- (id)lock;
- (void)setDeviceID:;
- (id)deviceID;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)shareInstance;
@end
