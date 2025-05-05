@interface BDUGLuckyCommonSettingsInfo : BDUGLuckyJSONModel
@property (nonatomic) q version;
@property (nonatomic) Q settingsType;
@property (nonatomic) double pollingInterval;
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) BDUGLuckyJSONModel dataModel;
@property (nonatomic) BOOL needStoreOnDisk;
- (BOOL)needStoreOnDisk;
- (id)initWithNeedStoreOnDisk:pollingInterval:settingsType:dataModel:rawData:version:;
- (void)setNeedStoreOnDisk:;
- (void)setRawData:;
- (void)setVersion:;
- (long long)version;
- (double)pollingInterval;
- (unsigned long long)settingsType;
- (void)setSettingsType:;
- (void).cxx_destruct;
- (id)rawData;
- (id)dataModel;
- (void)setDataModel:;
- (void)setPollingInterval:;
@end
