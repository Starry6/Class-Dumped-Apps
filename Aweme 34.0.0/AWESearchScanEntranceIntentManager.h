@interface AWESearchScanEntranceIntentManager : NSObject
@property (nonatomic) NSDictionary settingData;
@property (nonatomic) NSMutableDictionary intentDictionary;
- (id)fetchIntentDataWithModel:andConfig:;
- (void)setupSettingData;
- (void)setupIntentDictionary;
- (void)setSettingData:;
- (void)setIntentDictionary:;
- (id)settingData;
- (id)intentDictionary;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
